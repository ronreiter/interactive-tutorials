Python是完全面向对象的，并且不是“静态类型”的。您不需要在使用变量之前声明它们，或者声明它们的类型。在Python中，每个变量都是一个对象。

本教程将介绍几种基本类型的变量。

### Numbers
Python支持两种类型的数字——整数（整数）和浮点数（小数）。（它还支持复数，但本教程不作解释）。

要定义一个整数，请使用以下语法：

    myint = 7
    print(myint)

要定义一个浮点数，您可以使用以下其中一种表示法：

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

字符串可以用单引号或双引号定义。

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

两者之间的区别是使用双引号可以更容易地包含撇号（否则使用单引号时会终止字符串）。

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
还有额外的定义字符串的变体，使其更容易包含诸如回车、反斜杠和Unicode字符之类的内容。这些不在本教程的讨论范围内，但可以在[Python文档](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial")中找到。

可以对数字和字符串执行简单的操作：

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

可以在同一行“同时”对多个变量进行赋值，如下所示：

    a, b = 3, 4
    print(a, b)

不支持在数字和字符串之间混合使用操作符：

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


练习
--------

这次练习的目标是创建一个字符串、一个整数和一个浮点数。字符串应该命名为`mystring`，包含单词"hello"。浮点数应该命名为`myfloat`，并包含数字10.0，整数应该命名为`myint`，并包含数字20。