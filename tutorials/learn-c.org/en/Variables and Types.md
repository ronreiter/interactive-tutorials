Tutorial
--------

### 数据类型

C语言有很多种类型的变量，但只有几个基本类型。

* 整数——可以是正数或负数的整数。使用`char`、`int`、`short`、`long`或`long long`来定义。
* 无符号整数——只能是正数的整数。使用`unsigned char`、`unsigned int`、`unsigned short`、`unsigned long`或`unsigned long long`定义。
* 浮点数——实数（带小数的数字）。使用`float`和`double`来定义。
* 结构——将在后面的结构部分解释。

不同类型的变量定义了它们的界限。一个`char`的范围只能从-128到127，而一个`long`的范围可以从-2,147,483,648到2,147,483,647（`long`和其他数字数据类型在不同的计算机上可能有另一个范围，例如——在64位计算机上从-9,223,372,036,854,775,808到9,223,372,036,854,775,807）。

请注意，C语言*没有*布尔类型。通常情况下，它是用下面的符号定义的。

    #define BOOL char
    #define FALSE 0
    #define TRUE 1

C语言使用字符数组来定义字符串，将在`字符串`部分进行解释。

### 定义变量

对于数字，我们通常会使用`int`类型，它是一个`字`大小的整数，也就是你的程序的编译机器的默认数字大小。
在今天的大多数计算机上，它是一个32位的数字，这意味着数字的范围可以从-2,147,483,648到2,147,483,647。

为了定义变量`foo`和`bar`，我们需要使用以下语法。

    int foo;
    int bar = 1;

变量`foo`可以使用，但由于我们没有初始化它，我们不知道里面有什么。变量`bar`装着数字1。

现在，我们可以做一些数学运算。
假设`a`、`b`、`c`、`d`和`e`是变量，我们可以简单地使用加、减和乘法运算符 在下面的代码中，给`a`分配一个新值：


    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* will print 1-2+3*4 = 11 */

Exercise
--------

在下一个练习中，你将创建一个程序，打印出数字`a`、`b`和`c`的和。

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      /* 你的代码放在这里 */

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }

Expected Output
---------------
    The sum of a, b, and c is 12.750000.

Solution
--------
    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      sum = a + b + c;

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }
