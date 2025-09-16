您可以通过使用functools库中的partial函数在Python中创建偏函数。

偏函数允许将具有x个参数的函数派生为具有更少参数的函数，并为更有限的函数设置固定值。

需要导入：

    from functools import partial

这段代码将返回8。

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # 创建一个新的乘以2的函数
    dbl = partial(multiply, 2)
    print(dbl(4))

一个重要的注意事项：默认值将从左开始替换变量。2将替换x。当调用dbl(4)时，y将等于4。在这个例子中没有区别，但在下面的例子中有区别。

练习
--------
通过调用partial()并替换func()中的前三个变量来编辑提供的函数。然后仅用一个输入变量使用新的偏函数打印，以使输出等于60。