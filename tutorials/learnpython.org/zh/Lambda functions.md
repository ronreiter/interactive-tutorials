正常情况下，我们使用 `def` 关键字在代码的某处定义一个函数，并在需要使用时调用它。

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

现在，我们可以使用 Python 的 lambda 函数来代替在某处定义函数并调用它。lambda 函数是在我们使用它的地方定义的内联函数。因此，对于一次性的使用，我们无需在某处声明一个函数并再次查看代码。

它们不需要名称，因此也被称为匿名函数。我们使用关键字 `lambda` 来定义一个 lambda 函数。

    your_function_name = lambda inputs : output

因此，上述使用 lambda 函数的 sum 示例将是：

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

在这里，我们将 lambda 函数赋值给变量 **sum**，并在给定参数 a 和 b 时，它像普通函数一样工作。

练习
--------
编写一个使用 lambda 函数的程序，用于检查给定列表中的数字是否为奇数。对于每个元素，如果数字是奇数则打印 "True"，否则打印 "False"。