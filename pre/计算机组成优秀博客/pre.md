## Pre阶段小知识点总结

（今天早上闲的没事干，写篇总结，准备迎接pre）

# Logisim

感觉logisim阶段还是比较简单的，教程也比较详细，要提醒自己的就是一定要多用标签,还有分析电路很好用~~。

# Verilog

### 最稳的算数右移

```
$signed($signed(A)>>>B)
```

### 位数扩展及拼接

```
assign A = {16'h0000, B}
```

这个“{}”可以看成一种操作（符），和 “+”、“-”没什么区别，都会产生一个结果。

串联运算符{a,b,c}用来将小向量串联起来创建一个更大的向量。串联中不允许使用不定尺寸的常量。如{1,2,3}是非法的，因为Verilog不知道他们的位宽。

还可以用{n{vec}}的形式来复制向量，如{6{a}}和{a,a,a,a,a,a}是一样的，同时注意两组大括号都是必须的，即{1'b1,6{1'b0}}是非法的，因为其中的6{1'b0}少了一组大括号，正确的写法是{1'b1,{6{1'b0}}}。这其实比较好理解，串联运算符{a,b,c}中的abc均为一个向量，{n{vec}}也代表了一个向量，因此{a,b,{n{c}}}也是一个向量

### 循环操作的语法

```
//普通for循环：
    integer i;
    always @(vote) begin
        sum = 3'b000;
        for(i = 0; i <7; i = i + 1) begin
            if(vote[i]) sum = sum + 1;
        end
        if(sum >= 3'd4) pass = 1'b1;
        else pass = 1'b0;
    end
//生成for循环：
genvar i;//只能用genvar作为循环变量
    generate
        for (i=1;i<99;i=i+1) begin: add_loop//这个名字是必须的
            mod_name instance_name(......);//括号里写由i推出的信号
       	end
    endgenerate
```

### 组合逻辑的构建

1. 使用assign语句，搭配三目运算符
2. 使用always@(*) 和 <=
3. 尤其注意组合逻辑是随着周期还是assign

### 好用的casez

casez可以匹配形如4'bzzz1的向量，z表示无关位。

```
优先编码器
module top_module (
    input [7:0] in,
    output reg [2:0] pos  );
    always @(*) begin
        casez (in)
            8'bzzzzzzz1 : pos = 0;
            8'bzzzzzz1z : pos = 1;
            8'bzzzzz1zz : pos = 2;
            8'bzzzz1zzz : pos = 3;
            8'bzzz1zzzz : pos = 4;
            8'bzz1zzzzz : pos = 5;
            8'bz1zzzzzz : pos = 6;
            8'b1zzzzzzz : pos = 7;
            default: pos =0;
        endcase
    end   
endmodule
```

### 状态机标准写法：

#### Moore型

三段式写法：使用一个state用于存当前状态，使用一个next_state用于存下一状态。第一段用于写状态转换逻辑，第二段用于状态转移，第三段用于输出。

```
    reg state, next_state;

	//第一段：
	always @(*) begin    //一个组合逻辑always块，用于写状态转换逻辑，当in改变时，next_state将立即改变。
        case(state)
            A: next_state = f(in)//关于in的函数
            B: next_state = f(in)
            ...    
        endcase
    end
                
	//第二段（异步）：
    always @(posedge clk, posedge areset) begin    
        if(areset == 1) begin
            state <= 0;//reset
        end
        else state <= next_state;
    end
	//第二段（同步）：
    always @(posedge clk) begin   
        if(reset == 1) begin
            state <= 0;//reset
        end
        else state <= next_state;
    end
            
    //第三段（assign法）
            assign out = (state == ...);//判断state
	//第三段（组合逻辑always块法）
    always@(*) begin
        case (state)
            A: {out3,out2,out1} = 3'b111;
            B: {out3,out2,out1} = 3'b110;//对每一种状态输出
            ...
        endcase
    end
```

#### Mealy型

仅仅第三段发生了改变，可使用{state,in}来做输出判断。

```
    //第三段（assign法）
    assign out = f(state,in);//关于state和in的函数
    //第三段（组合逻辑always块法）
    always@(*) begin
        case ({state,in})
            4'b0000: {out3,out2,out1} = 3'b111;
            4'b0001: {out3,out2,out1} = 3'b110;//对每一种state与in做输出
            ...
    end
```

#### 小tips:使用独热码可以迅速减少代码量

```
//独热码基本模板（伪代码）：
parameter s0=0,s1=1……//多少状态写几种参数,假设为n种状态,而且建议大家多用parameter，宏写起来真的别扭
reg[n-1:0] state,next;
always @(*)begin
	next[s0]=state……
	next[s1]=state……
	…………………………
	next[s(n-1)]=state……
end
always @(posedge clk)begin
	if(reset)begin
		state<=1;
//注意回到状态s0要赋值为1
	end
	else begin
		state<=next;
	end
end
assign out=……
//这样的写法虽然大体思路基本相同，但可以省略大量的if-else语句，极大减少代码量，而且容易debug,缺点是综合时比较费空间，但这个大家应该不是很在乎吧~~
```

# MIPS

### 字符串

#### .ascii与.asciiz

.ascii不会在字符串后加上'\0'，而.asciiz会在字符串加'\0'。 两者均以字节为单位存储数据，这会对我们带来一些小麻烦，.asciiz之后分配的空间首地址有可能无法字对齐，因此我们在定义.ascii与.asciiz时尽量写在最后面

```
#正确写法
.data
	array_int: .space 28
	space: .asciiz " "
#错误示范
.data
	space: .asciiz " " 
	array_int: .space 28
#由于.data后面的变量声明在内存中是紧密有序存储的，所以后面获取array的地址时会报错“fetch address not aligned on word boundary 0x00000002”
```

### 大端存储和小端存储

小端存储听起来更正常一些：
LSB存储到低地址

### 伪指令（directives）

伪指令不会被编译成机器码，但却影响其他指令的汇编结果。
伪指令有点像变量分配

.data
用于预先存储数据的伪指令的开始标志, 就是在告诉Mars，我从这要开始变量的声明和分配了

### branch和j能跳转多少

1. branch 有16位的offset（imm），采用**相对寻址**的方式
   首先，如果条件不成立，那么会有：
   PC = PC + 4
   如果条件成立，有：
   PC = PC + 4*(imm)
   由于指令是4字节对齐的，因此可支持的跳转范围实际上是2^18=256KB（相对PC的-128KB~+128KB）。
   如果确定跳转目标地址在分支指令前后的128KB范围内，编译器就可以编码只生成一条简单的条件分支指令。
   -128KB ~ +128KB，-32Kword ~ +32Kword
   大约在三千条指令内跳转，所以一般来说，不会跳太远
2. j指令 MIPS指令中最小的操作码域占6位，剩下的26位（instr_index）用于跳转目标的编址。
   PC = {PC[31:28]:instr_index:00}
   OX0FFFFFFC是能跳转最多的
   由于所有指令在内存中都是4字节对齐的，因此最低的2个比特位是无需存储的，这样实际可供寻址范围为2^28=256MB。
   分支跳转地址被当做一个256MB的段内绝对地址.

### 常用的syscall

if($v0 == XX) then ($a0/$v0 will XX)

#### print

|    Service    | Code in $v0 |                      Arguments                      |
| :-----------: | :---------: | :-------------------------------------------------: |
| print integer |      1      |              $a0: the integer to print              |
| print string  |      4      | $a0: the address of null-terminated string to print |

#### read

|     Service      | Code in $v0 |                          Arguments                           |
| :--------------: | :---------: | :----------------------------------------------------------: |
|   read integer   |      5      |                     $v0 contains the num                     |
|  read a string   |      8      | $a0: the address of input buffer $a1: max num of character to read |
| read a character |     12      |                    $v0 contains the char                     |

#### 万能的宏

宏就类似c语言的函数一样，巧妙复用可以达到事半功倍的效果，还能迅速减少代码量

```
1.输入整数
.macro scanf(%i)
      li $v0,5
      syscall
      move %i,$v0
	.end_macro


2.输出整数
.macro printf(%i)
      move $a0,%i
      li $v0,1
      syscall
	.end_macro


3.结束函数
.macro end()
      li $v0,10
      syscall
	.end_macro


4.压栈，出栈
.macro push(%src)
      sw %src 0($sp)
      subi $sp,$sp,4
	.end_macro
	
	.macro pop(%des)
      addi $sp $sp,4
      lw %des 0($sp)
	.end_macro


5.二维数组下标
.macro get(%des,%i,%j)
	sll %des,%i,4 //这里的4可以按需修改，取决于你所申请的空间大小
	add %des,%des,%j
	sll %des,%des,2
.end_macro


6.输出空格
space:.asciiz " "
.macro print_space()
	la $a0,space
	li $v0,4
	syscall
.end_macro


7.输出回车
enter:.asciiz "\n"
.macro print_enter()
	la $a0,enter
	li $v0,4
	syscall
.end_macro


8.输出标记
flag:.asciiz "flag"
.macro	print_flag()
      la $a0,flag
      li $v0,4
      syscall
	.end_macro
//输出标记的作用类似debug时的断点，方便你看到程序是否跑到了某个位置
```

## 下周就要开始上机了，希望上机一切顺利