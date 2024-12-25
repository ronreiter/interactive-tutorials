内容：
在 Python 中，每个函数接受的参数数量是预定义的，如果正常声明的话，如下所示：

```python
def myfunction(first, second, third):
    # 对三个变量进行某些操作
    ...
```

可以声明接收可变数量参数的函数，使用以下语法：

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

“therest”变量是一个变量列表，它接收所有在前三个参数之后传递给“foo”函数的参数。因此调用`foo(1, 2, 3, 4, 5)`将输出：

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))
    
foo(1, 2, 3, 4, 5)
```

也可以通过关键字传递函数参数，这样参数的顺序就不重要了，使用以下语法。以下代码提供以下输出：
```输出：
The sum is: 6
Result: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

“bar”函数接受3个参数。如果接收到一个附加的“action”参数，并指示对数字进行求和，那么总和将被打印出来。或者，如果传递给函数的“number”参数的值等于“first”，则函数还会返回第一个参数。

练习
--------

填充 `foo` 和 `bar` 函数，使它们可以接收可变数量的参数（3个或更多）。
`foo` 函数必须返回接收到的额外参数的数量。
如果带有关键字 `magicnumber` 的参数等于7，`bar` 函数必须返回 `True`，否则返回 `False`。