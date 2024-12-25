```markdown
装饰器允许您对可调用对象进行简单修改，比如[函数](http://www.learnpython.org/en/Functions "")、[方法或类](http://www.learnpython.org/en/Classes%20and%20Objects "")。在本教程中我们将处理函数。语法

    @decorator
    def functions(arg):
        return "value"

等同于：

    def function(arg):
        return "value"
    function = decorator(function) # 这会将函数传递给装饰器，并将其重新赋值给函数

正如您所见，装饰器只是另一个函数，它接受一个函数并返回一个函数。例如，您可以这样做：

    def repeater(old_function):
        def new_function(*args, **kwds): # 参见 learnpython.org/en/Multiple%20Function%20Arguments 了解 *args 和 **kwds 的功能
            old_function(*args, **kwds) # 我们运行旧函数
            old_function(*args, **kwds) # 我们重复运行两次
        return new_function # 必须返回 new_function，或者不会重新赋值

这将使函数重复运行两次。

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

您还可以更改输出

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # 修改返回值
        return new_function

更改输入

    def double_Ii(old_function):
        def new_function(arg): # 仅适用于旧函数具有一个参数的情况
            return old_function(arg * 2) # 修改传递的参数
        return new_function

并进行检查。

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # 这会引发错误，比执行错误操作更好
            old_function(arg)
        return new_function

假设您想用一个可变的量来乘以输出。您可以定义装饰器并如下使用：

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # 返回新的生成器
    
    # 用法
    @multiply(3) # multiply 不是生成器，但 multiply(3) 是
    def return_num(num):
        return num
        
    # 现在 return_num 被装饰并重新赋值给自身
    return_num(5) # 应返回 15

您可以对旧函数做任何事情，甚至完全忽略它！高级装饰器还可以操作文档字符串和参数数量。
要获取一些炫酷的装饰器，请访问 <http://wiki.python.org/moin/PythonDecoratorLibrary>。

Exercise
--------
创建一个装饰器工厂，它返回一个装饰函数为单参数的装饰器。工厂应接收一个参数，一个类型，然后返回一个装饰器，该装饰器应检查输入是否是正确的类型。如果类型错误，则应打印("Bad Type")（实际上，应引发一个错误，但本教程中不包括错误引发）。如果感到困惑，请查看教程代码和期望输出（我肯定会这样的）。使用 isinstance(object, type_of_object) 或 type(object) 可能会有所帮助。
```