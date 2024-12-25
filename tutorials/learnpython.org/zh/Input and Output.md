在交互式编程中，以所需的方式获取输入和显示输出非常重要。因此，让我们专注于各种数据类型的输入和输出。

###raw_input()
用于获取直到行末的输入。注意，不应有任何空格。输入以新行字符终止，如果输入行中有任何空格，则会导致错误。

    # 打印从标准输入接收到的输入
    astring=raw_input()# 输入hello
    print raw_input()

在接收输入后，我们可以使用像 int()、float()、str() 这样的函数将其转换为所需的数据类型。

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
特别用于输入整数。input() 相对于 raw_input() 的优势可以通过以下示例进行说明。

    #输入 2*2
    a=input()
    b=raw_input() #注意 int(raw_input()) 会导致错误
    print a #打印 4
    print b #打印 2*2

###如何从单行中以空格分隔的方式输入多种数据类型？
在这里，我们利用 split() 和 map() 函数。

    # 第一行输入两个整数，第三行输入多个整数
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # 打印第一行的前两个整数以及第二行整数的总和

###输出格式
您可能已经注意到，print 语句自动插入一个新行。像上面代码中的逗号用法使得值以空格分隔的方式在同一行打印。
sys 模块提供了各种输出格式化功能，但在这里我们学习如何使用基本的格式化知识以我们的需求输出。让我们通过几个例子来学习输出格式化。

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

输出应当是不言自明的。

Exercise
--------

编写一个程序，要求用户输入他们的名字、年龄和国家。然后，程序应打印包含此信息的句子。程序应包括：

1. 使用 `raw_input()` 输入名字。
2. 使用 `input()` 输入年龄，并将其转换为整数。
3. 使用 `raw_input()` 输入国家名称。
4. 格式化输出，显示包含名字、年龄和国家的句子。

该程序应展示Python中的输入处理和字符串格式化。