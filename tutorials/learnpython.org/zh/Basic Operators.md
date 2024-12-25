该部分讲解了如何在 Python 中使用基本运算符。

### 算术运算符

与其他编程语言一样，加、减、乘、除运算符可以用于数字操作。

    number = 1 + 2 * 3 / 4.0
    print(number)

试着预测答案会是多少。Python 是否遵循运算优先级？

另一个可用的运算符是取模（%）运算符，它返回除法的整数余数。 被除数 % 除数 = 余数。

    remainder = 11 % 3
    print(remainder)

使用两个乘号表示幂运算关系。

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### 使用字符串运算符

Python 支持使用加号运算符连接字符串：

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python 也支持通过乘法运算符重复字符串形成新的字符串：

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### 使用列表运算符

可以通过加法运算符连接列表：

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

就像字符串一样，Python 支持使用乘法运算符形成有重复序列的新列表：

    print([1,2,3] * 3)

Exercise
--------

该练习的目标是创建两个列表，分别命名为 `x_list` 和 `y_list`，其中包含 10 个变量 `x` 和 `y` 的实例。还需要创建一个名为 `big_list` 的列表，通过连接你创建的两个列表，使其包含 10 次变量 `x` 和 `y`。