# 编译  
这个生成器用C++编写，所以最好在自己的设备上编译运行。  
./out/build/x64-debug/COgenerator/ 下有一个在本人电脑上的编译结果COgenerator.exe。  
# 命令行
```
COgenerator.exe filename Instr_Number
```
第一个参数是存放生成的指令的文件路径，第二个参数是要生成指令的大致数量（最终生成的指令数量会稍多于它）。生成的结果是指令，而不生成机器码。  
# 注意  
+ 原版MARS .text允许的指令比较少，对应Instr_Number在700-900左右。
+ 除了试图提高转发/暂停的措施外，其它数据尽可能随机生成，add sub溢出在所难免，如果想要用MARS生成对拍结果，请提前将add sub改成addu subu。可以在MARS>edit>find/replace里replace, 也可以写个小脚本。  