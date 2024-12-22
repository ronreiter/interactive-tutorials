本节将解释如何在 Python 中使用基本运算符。

### Arithmetic Operators       

与其他编程语言一样，Python 可以对数字使用加、减、乘、除运算符。<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

尝试预测结果会是什么。Python 是否遵循运算顺序？

另一个可用的运算符是求模（%）运算符，它返回除法的整数余数。被除数 % 除数 = 余数。

    remainder = 11 % 3
    print(remainder)

使用两个乘号可以表示幂运算关系。

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python 支持使用加号运算符连接字符串：

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python 还支持通过乘法运算符生成重复序列的字符串：

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

列表可以通过加号运算符合并：

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

就像字符串一样，Python 支持通过乘法运算符生成重复序列的新列表：

    print([1,2,3] * 3)

Exercise
--------

此次练习的目标是创建两个列表，称为 `x_list` 和 `y_list`，
其中分别包含变量 `x` 和 `y` 的 10 个实例。
还需要创建一个称为 `big_list` 的列表，
其中变量 `x` 和 `y` 各 10 次，通过连接您创建的两个列表来实现。