闭包是一个函数对象，它记住了外围作用域中的值，即使这些值不在内存中。让我们一步一步来理解这个概念。

首先，**嵌套函数**是定义在另一个函数内部的函数。非常重要的一点是，嵌套函数可以访问外围作用域中的变量。然而，至少在 Python 中，这些变量是只读的。然而，可以显式地使用“nonlocal”关键字来修改这些变量。

例如：

```python
def transmit_to_space(message):
    "这是外部函数"
    def data_transmitter():
        "嵌套函数"
        print(message)
    
    data_transmitter()

print(transmit_to_space("Test message"))
```

这可以正常工作，因为 'data_transmitter' 函数可以访问 'message'。为了演示“nonlocal”关键字的使用，请考虑以下示例：

```python
def print_msg(number):
    def printer():
        "这里我们使用了 nonlocal 关键字"
        nonlocal number
        number=3
        print(number)
    printer()
    print(number)

print_msg(9)
```

如果不使用 nonlocal 关键字，输出将是“3 9”，然而，使用该关键字后，我们得到“3 3”，即“number”变量的值被修改了。

现在，我们返回函数对象，而不是调用嵌套函数。（记住，即使是函数也是对象。（这是 Python。））

```python
def transmit_to_space(message):
    "这是外部函数"
    def data_transmitter():
        "嵌套函数"
        print(message)
    return data_transmitter
```

我们这样调用函数：

```python
def transmit_to_space(message):
    "这是外部函数"
    def data_transmitter():
        "嵌套函数"
        print(message)
    return data_transmitter

fun2 = transmit_to_space("Burn the Sun!")
fun2()
```

即使“transmit_to_space()”的执行已经结束，消息仍然被保存。这种将数据附着到一些代码上的技术，即使在那些其他原始函数结束之后，称为 Python 中的闭包。

优点：闭包可以避免使用全局变量，并提供某种形式的数据隐藏。（例如，当类中有一些方法时，可以使用闭包代替。）

此外，Python 中的修饰器大量使用闭包。

练习
--------

制作一个嵌套循环和 Python 闭包，通过闭包创建多个乘法函数。也就是说，使用闭包，可以创建乘以 5 的函数 `multiply_with_5()` 或乘以 4 的函数 `multiply_with_4()`。