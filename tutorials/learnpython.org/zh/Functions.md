### 什么是函数？

函数是一种方便的方式，可以将代码划分为有用的块，使我们能够更好地组织代码，使其更易读、便于重用，从而节省一些时间。此外，函数是定义接口的关键方法，以便程序员可以共享他们的代码。

### 如何在 Python 中编写函数？

正如我们在之前的教程中所看到的，Python 使用块结构。

块是以如下格式书写的代码区域：

    block_head:
        第一个块行
        第二个块行
        ...

其中一个块行是更多的 Python 代码（甚至是另一个块），而块头的格式如下：
block_keyword block_name(argument1,argument2,...)
你已经知道的块关键词有 "if"、"for"、和 "while"。

Python 中的函数是通过使用块关键词 "def" 来定义的，后跟作为块名的函数名。
例如：

    def my_function():
        print("Hello From My Function!")


函数还可以接收参数（从调用者传递到函数的变量）。
例如：

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


函数可以使用关键词 'return' 向调用者返回一个值。
例如：

    def sum_two_numbers(a, b):
        return a + b

### 如何在 Python 中调用函数？

只需写下函数的名字，再加上括号 ()，在括号中放置任何所需的参数。
例如，让我们调用上面编写的函数（在前面的例子中）：

    # 定义我们的三个函数
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # 打印一个简单的问候
    my_function()

    # 打印 - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # 在这行代码之后，x 将持有值 3!
    x = sum_two_numbers(1, 2)  


练习
--------

在这个练习中，你将使用一个现有的函数，同时添加你自己的函数来创建一个完整的程序。

1. 添加一个名为 `list_benefits()` 的函数，返回以下字符串列表："More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. 添加一个名为 `build_sentence(info)` 的函数，该函数接收一个包含字符串的单个参数，并返回一个以给定字符串开头并以字符串 " is a benefit of functions!" 结尾的句子。

3. 运行并查看所有函数如何一起运行！