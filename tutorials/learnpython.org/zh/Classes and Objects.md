对象是将变量和函数封装成单个实体。对象从类中获取它们的变量和函数。类基本上是用于创建对象的模板。

一个非常基本的类看起来像这样：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

稍后我们会解释为什么你需要将“self”作为参数包含在内。首先，要将上述类（模板）分配给一个对象，您需要执行以下操作：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

现在变量“myobjectx”保存了一个“MyClass”类的对象，其中包含在类“MyClass”中定义的变量和函数。

### 访问对象变量

要访问新创建对象“myobjectx”中的变量，您需要执行以下操作：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

例如，下面的代码将输出字符串“blah”：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

您可以创建多个属于同一类的不同对象（定义了相同的变量和函数）。但是，每个对象都包含类中定义的变量的独立副本。例如，如果我们用"MyClass"类定义另一个对象，然后更改上述变量中的字符串：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # 然后打印出两个值
    print(myobjectx.variable)
    print(myobjecty.variable)


### 访问对象函数

要访问对象内部的函数，您使用的表示法类似于访问变量的方式：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

上述代码将打印出消息：“This is a message inside the class.”

### __init__()

`__init__()`函数是一个特殊函数，在类初始化时调用。用于在类中分配值。

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #打印'7'
    
练习
--------

我们定义了一个车辆的类。创建两个新的车辆，分别命名为car1和car2。
将car1设置为一辆价值$60,000.00的红色敞篷车，名字为Fer，
将car2设置为一辆名为Jump的蓝色货车，价值$10,000.00。