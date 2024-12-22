Python 是一种非常简单的语言，语法非常直观。它鼓励程序员编写时避免使用样板代码（预备代码）。在 Python 中，最简单的指令是 "print" 指令——它只是输出一行（并且包括换行符，这与 C 语言不同）。

Python 有两个主要版本，Python 2 和 Python 3。Python 2 和 Python 3 之间有很大区别。本教程使用 Python 3，因为它在语义上更正确，并且支持更新的功能。

例如，Python 2 和 3 之间的一个区别是 `print` 语句。在 Python 2 中，"print" 是一个语句，因此调用时不需要括号。然而，在 Python 3 中，它是一个函数，调用时必须使用括号。

要在 Python 3 中打印一个字符串，只需写：

    print("This line will be printed.")

### 缩进

Python 使用缩进来表示代码块，而不是花括号。支持使用制表符和空格，但标准 Python 代码要求使用四个空格进行标准缩进。例如：

    x = 1
    if x == 1:
        # 缩进四个空格
        print("x is 1.")

练习
--------

使用 "print" 函数打印 "Hello, World!" 这一行。