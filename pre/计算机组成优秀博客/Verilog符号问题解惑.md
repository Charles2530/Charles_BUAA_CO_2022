此贴本是我在讨论区某提问下的回答，当时提问同学对896-837一题存在疑问。我随便想了一下，又翻了教程中[有符号数的处理方法](https://cscore-buaa-edu-cn.vpn.buaa.edu.cn:8118/tutorial/verilog/verilog-3/verilog-3-7/)一节，才发现自己对Verilog中表达式符号的处理的理解仍浮于表面，遂找了IEEE的标准文本研读，现将我个人的理解分享如下，**建议搭配教程结合食用**。

------

首先我们要了解，一个表达式由操作数（`Operand`）、运算符（`Operator`）组成，且可以递归定义（详见教程-[有符号数的处理方法](https://cscore-buaa-edu-cn.vpn.buaa.edu.cn:8118/tutorial/verilog/verilog-3/verilog-3-7/)）。

针对符号，表达式的最终计算主要有两步：①`符号确定`②`向内传播`。

首先根据[`IEEE 1364-2005`](https://ieeexplore-ieee-org-s.vpn.buaa.edu.cn:8118/document/1620780)Verilog语言标准第5.1节、第5.5节可以了解到，存在如下一些特殊的运算符（包括但不限于），它们的符号仅由其中部分操作数确定：

- 移位运算符(<<、>>、>>>等）生成的表达式（形如`i >>> j`）的符号**只**由`i`的符号决定，`j`恒视作无符号且不参与该表达式的符号确定。
- 三目运算符生成的表达式（形如`i ? j : k`）中的`i`不参与该表达式的符号确定。

其次，各类常量的符号性也在标准文本中定义：

> — **Decimal numbers** are **signed**.
> — **Based_numbers** are **unsigned**, except where the s notation is used in the base specifier (as in "4'sd12").

比如`0`等常量是有符号的，而`4b'0`、`2'd0`等给定基数形式的常量是无符号的（形如`4'sd12`的除外，为有符号常量，其中`s`即表示`Signed`）。

再看标准文本对`符号确定`的解释：

> — For **nonself-determined operands**, the following rules apply:
>   — **If any operand is unsigned, the result is unsigned**, regardless of the operator.
>   — If all operands are signed, the result will be signed, regardless of operator, except when specified otherwise.

个人对其理解为：**如果一个表达式在排除不参与其符号确定的操作数后，剩下的子表达式中任意一个被确定为无符号，那么整个表达式都被确定为无符号，否则有符号**（与`向内传播`相反，`符号确定`这一过程是由内向外的）。一句话，就是Verilog偏爱无符号。

------

看完了第①步`符号确定`，现在开始`向内传播`，依然是标准文本：

> — Propagate the type and size of the expression (or self-determined subexpression) back down to the **context-determined operands** of the expression. In general, any context-determined operand of an operator shall be the same type and size as the result of the operator.
> — When propagation reaches a **simple operand** as defined in 5.2 (a primary as defined in A.8.4), then that operand shall **be converted to the propagated type and size**. If the operand must be extended, then it shall be sign-extended only if the propagated type is signed.

这部分与教程解释一致：**在确定整体表达式的符号性后，将确定好的符号性由外向内地传递给上下文决定的子表达式（自决定的子表达式不受影响）。类似递归的过程，遇到原子表达式则强制转换原子表达式的符号。**

------

如果你还是觉得难以理解，那就直接通过一个例子（简化自896-837）来感受一下：

> ```
> 1 ? $signed(a)>>>b : 4'b0
> ```

首先Verilog不存在表达式短路这样的优化（至少仿真时没有），所以我们不能把该表达式进一步简化成`$signed(a)>>>b`，仍然要看整体。

`符号确定`：首先`1`不参与符号确定，排除；`$signed(a)>>>b`和`4'b0`，其中`4'b0`显然无符号，`$signed(a)>>>b`符号由`$signed(a)`决定，是有符号的；则表达式`1 ? 有符号 : 无符号`，根据Verilog对无符号的偏爱，表达式整体无符号。

`向内传播`：首先`1`不受影响，排除；原子表达式`4'b0`本就是无符号，无需转换；`$signed(a)>>>b`中`b`不受影响，再次递归进入`$signed(a)`，是有符号原子表达式，强制转化成无符号，即`$unsigned($signed(a))`。

最终表达式等价`a >> b`，相当于仍对`a`进行逻辑右移。

------

## 太长不看省流速通版：

一眼定真法（只看**一眼**就会爆炸能确**定**表达式**真**的是无符号的方**法**，用于确定给定表达式的结果）：扫描表达式中不在`$signed()`中也不属于不受影响的无符号原子操作数，找到一个则直接鉴定整个表达式无符号。如果这些操作数一个都找不到，恭喜，直接按正常思维就能算对表达式；如果鉴定为无符号，那么就要把表达式中所有不属于不受影响（几乎就是所有）的有符号原子操作数强制转化成无符号再计算。

狂暴括号法（同教程做法一，**不推荐**，用于自己写代码）：如果你不能确定到底哪些会变成无符号，那就尽一切办法阻止它

```verilog
assign a = ((b + c) >>> d) + e;  // 原式
assign a = $signed($signed($signed($signed(b) + $signed(c)) >>> $signed(d)) + $signed(e));  // 狂暴法
assign a = (($signed(b) + $signed(c)) >>> d) + $signed(e); // 温和法
```

此外还有分离变量、自己实现易出问题的部分等方法（见教程，都用于自己写代码）。

------

最后提一嘴`$signed()`，与`$unsigned()`一样是一类系统函数，不仅能强制转换符号性，还能起到类似屏障的作用，**函数内部的表达式是单独计算的**，既不影响函数外部符号的确定，外部符号向内传播时也不会进入函数内部，这点与教程推荐的分离变量的作用一致。因此可以把`$signed(a+b)`看成一个原子表达式或变量/常量，但**其本身依然有可能受到向内传播的影响，被转换成无符号形式，失去转换效果，但能保住其内部的表达式的计算结果**。 比如下面的例子（修改自教程）：

```verilog
// wrong !!!
assign out = op == 0? in_a + in_b:
             op == 1? in_a - in_b:
             op == 2? in_a >> in_b:
             $signed(in_a) >>> in_b;
/*
 * 比起给每个变量都加一层$signed()的方法，
 * 分离变量法与用$signed包裹敏感的中间量
 * 是更优的选择。
 */
// correct 分离变量法
wire [WIDTH-1:0] shift;
assign shift = $signed(in_a) >>> in_b;
assign out = op == 0? in_a + in_b:
             op == 1? in_a - in_b:
             op == 2? in_a >> in_b:
             shift;
// correct 用$signed包裹敏感中间量
assign out = op == 0? in_a + in_b:
             op == 1? in_a - in_b:
             op == 2? in_a >> in_b:
             $signed($signed(in_a) >>> in_b);
// correct 你甚至可以用$unsigned
assign out = op == 0? in_a + in_b:
             op == 1? in_a - in_b:
             op == 2? in_a >> in_b:
             $unsigned($signed(in_a) >>> in_b);
```

------

个人总结能力有限，如有不当、遗漏之处还请谅解或指出。