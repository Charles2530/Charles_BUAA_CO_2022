# 使用
## 编译  
这个生成器用C++编写，所以最好在自己的设备上编译运行。  
./out/build/x64-debug/COgenerator/ 下有一个在本人电脑上的编译结果COgenerator.exe。  
## 命令行
```
COgenerator.exe filename Instr_Number
```
第一个参数是存放生成的指令的文件路径，第二个参数是要生成指令的大致数量（最终生成的指令数量会稍多于它）。生成的结果是指令，而不生成机器码。  
## 注意  
+ 原版MARS .text允许的指令比较少，对应Instr_Number在700-900左右。开头的两个把$28,$29寄存器置零的指令也是为了能在MARS中和我的生成器中执行行为一致。我默认所有寄存器初值为0.
+ 除了试图提高转发/暂停的措施外，其它数据尽可能随机生成，add sub溢出在所难免，如果想要用MARS生成对拍结果，请提前将add sub改成addu subu。可以在MARS>edit>find/replace里replace, 也可以写个小脚本。  

# 关于COgenerator
这是一个试图尽可能实现随机指令，然后不断与自己和解的故事。  
我的生成器试图以随机生成为主、人为干预为辅。这里主要解决了以下几个问题：  
+ 怎么随机。怎么尽可能符合流水线CPU要求地随机(转发、暂停)。
+ 怎么处理访存时的地址对齐。  
+ 怎么处理分支/跳转，怎么保证指令流能正常结束。  
  
## class Random  
怎么符合流水线测试要求地随机？`Random`类用来生成所有指令种类、用旧值use寄存器和存新值new寄存器的编号、立即数等。为了制造冲突，`Random`中内置了每个寄存器的权重，权重越大的寄存器越可能被抽中。也就是说，当确定一个指令要产生新值后，把对应存储新值的寄存器权重上调，从而使它更容易被抽中。依权重的概率分布通过依权重划分区间长度获得，每个寄存器对应的区间长度为`权重+1`，随机数落在哪个区间，用哪个寄存器。  
每生成一个指令后，会对所有权重进行权值衰减，这样距离上次被抽中为new寄存器时间越远的，权值会降得越低。同时，最近抽中的new寄存器权值不会立刻降低，我希望这能提高随机到跨(一条)指令的转发的可能。  
这里初步选择了抽中的权值增幅为64，权值衰减为对每个权值除以2(即>>1)。  

## class Environment
怎么处理访存时的地址对齐？对于随机到的任何一个sw, lw指令，前面指令的情况都是不明的，包括beq, jr等指令都强烈依赖与前面指令的执行情况要求。这么看来，跟踪指令执行势在必行。那么，首先就是P5 CPU中的“环境”，寄存器文件和DM、PC。`Environment`类中封装了`RegFile`类和`DataMemory`类，能模拟寄存器和DM的变化。里面也封装了一个PC，但我的生成器的模拟中没有真正意义的PC行为，这涉及到我的另一个化简。  

## class Instr
模拟指令执行的另一个关键是指令类，每个指令都是`Instr`类的子类，主要实现构造函数(选用提供的use寄存器编号、new寄存器编号等构造自己这个指令)，虚函数`execute(Environment&)`用于通过修改环境执行自己，虚函数`print(FILE* file)`用于向目标文件打印自己。  
当然可以有更多优雅的方法实现这些，我选择了比较暴力的一种，把每个指令都封装成了类。  

## 解决访存地址对齐
有了这些准备，我通过以下方式解决地址对齐问题：
+ 暂定采用随机生成的use寄存器作为base。  
+ 随机生成地址值并将最低两个二进制位置0，压缩到400以内使访存更密集。  
+ 将随机的地址与随机得到的base寄存器值相减计算imm16，判断此值是否超过16位立即数范围。
+ 没有超出，则直接用随机到的base和刚刚算的imm16构造指令。
+ 超出，**人为干预**，直接用$0作为base, 随机到的地址值为imm16.

## 指令控制流
我最初的想法是不在生成过程中检查控制流，而是生成完毕后完整地模拟一遍随机的mips程序。受启发于非本地跳转，对于每个发生的分支和跳转，记录当时的Environment，跟踪其跳转的执行过程，如果遇到同一个跳转指令，这时和上次跳转时的Environment简化的判断是否弃用这个跳转指令(比如beq的两个寄存器值是否变化，引入随相遇次数增加而变大的俄罗斯转轮赌变量RR来决定是否弃用等)，如果弃用则恢复到跳转之前的Environment，从跳转之前接着模拟。我后来意识到这是个无底洞，决定换简化的方式：`跳转表-指令块`。  
### 跳转表-指令块
在开头是一系列`jal`与标签，每个jal跳转到不同编号的指令块，每个指令块中的指令都只会顺序执行一次，最后跳转回跳转表中的下一个jal。  
这使程序有了重大简化，我可以更容易地在生成过程中保证跳转合法，不用考虑某一条指令反复执行时环境变化导致的问题。我的模拟也可以不用PC，我只要记录当前所在的指令块编号，然后一条条生成，并即时执行即可。  
`class IMBlock`对应了一个指令块。  
### 指令块终结
我规定`jal`只在开头的跳转表中，指令块里用beq, jr往回跳。beq, jr的抽取也是随机的，如果指令块中随机到jr，则一定往回跳，并且一定用$31.如果$31地址错误，就**人为使jr伴生一个ori，将$31改为正确PC**(所需PC的值可以通过指令块编号算出)。如果随机到beq，则：
+ 如果随机到的两个use寄存器恰好相等，直接用这个并触发分支。
+ 如果不等，抛硬币判断是否分支，如果否，就用这两个不等的use寄存器。
+ 如果是，搜索所有寄存器是否有和rs相等的非rs，或者和rt相等的非rt。
+ 如果有，用这个搜索到的寄存器编号。
+ 如果没有，**人为伴生一个add $rt, $0, $rs**，把rt的值改为rs，触发分支。  

至此，姑且解决了控制流的问题。  

# 问题
+ 没有经过充分测试，但至少目前没有遇到过生成出错。
+ 加强转发、暂停发生的措施效果似乎一般。转发次数和指令条数之比大概在 10%~15%，几百条指令里暂停次数一般也就十几，单样例转发覆盖率难以突破70%，暂停覆盖率更低一些。这和对于跳转、分支指令的严格限制导致其相关的转发、暂停难以或者无法触发有关，也是调整确实的方式可能不太理想,或者参数不理想。  

# 其它
因为模拟了指令执行，所以其实有直接生成输出结果的潜能，但一来没有具体实现PC，而来担心正确性的问题，故还是建议用MARS以及佬们的魔改MARS。  
不管好坏，框架已经有了，扩展也只是相近地增加对应的指令类的过程，多是麻烦的体力工作。  
有问题请联系我(这很有可能)，我尽量改。不一定有新版本，写这玩意好累，我想摸了。  
-_-

## *Author* : 李佳恒