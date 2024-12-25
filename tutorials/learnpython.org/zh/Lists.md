Lists 与 arrays 非常相似。它们可以包含任何类型的变量，并且可以包含任意数量的变量。Lists 也可以非常简单地进行迭代。这里是一个如何构建 List 的示例。

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

访问一个不存在的索引会生成一个异常（错误）。

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

在这次练习中，你需要使用 "append" list 方法将数字和字符串添加到正确的 lists 中。你必须将数字 1、2 和 3 添加到 "numbers" list 中，并将 'hello' 和 'world' 两个单词添加到 strings 变量中。

你还需要使用括号操作符 `[]` 填写 names list 中的第二个名字到变量 second_name。注意索引是从零开始的，所以如果你想访问 list 中的第二项，它的索引就是 1。