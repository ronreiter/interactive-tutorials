在Python中有两种类型的循环：for和while。

### The "for" loop

For循环用于遍历一个给定的序列。下面是一个例子：

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For循环可以使用“range”和“xrange”函数遍历一系列数字。range和xrange的区别在于，range函数返回一个指定范围的新列表，而xrange返回一个迭代器，这更有效率。（Python 3中使用的range函数类似于xrange）。注意，range函数是基于零开始的。

    # 打印出数字0,1,2,3,4
    for x in range(5):
        print(x)

    # 打印出3,4,5
    for x in range(3, 6):
        print(x)

    # 打印出3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loops

只要某个布尔条件满足，while循环就会重复。例如：

    # 打印出0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # 这和 count = count + 1 是一样的

### "break" 和 "continue" 语句

**break** 用于退出for循环或while循环，而**continue**用于跳过当前块，并返回到“for”或“while”语句。几个例子：

    # 打印出0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # 只打印奇数 - 1,3,5,7,9
    for x in range(10):
        # 检查x是否为偶数
        if x % 2 == 0:
            continue
        print(x)

### 我们可以对循环使用“else”子句吗？

与C, CPP等语言不同，我们可以对循环使用**else**。当“for”或“while”语句的循环条件失败时，将执行“else”中的代码部分。如果在for循环中执行了**break**语句，则“else”部分会被跳过。注意，即使有**continue**语句，“else”部分仍会执行。

这里有几个例子：

    # 打印出0,1,2,3,4，然后打印"count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # 打印出1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

练习
--------

遍历并打印出numbers列表中所有偶数，顺序与接收到的顺序相同。不要打印序列中237之后的任何数字。