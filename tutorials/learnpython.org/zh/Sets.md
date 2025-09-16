集合是没有重复条目的列表。假设你想收集一段文字中使用的单词列表：

    print(set("my name is Eric and Eric is my name".split()))

这将打印出一个包含“my”、“name”、“is”、“Eric”，最后是“and”的列表。由于句子中其余部分使用的单词已经在集合中，因此不会重复插入。

集合在Python中是一种强大的工具，因为它们可以计算其他集合之间的差异和交集。例如，假设你有一个包含事件A和B的参与者名单：

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

要找出哪些成员参加了两个事件，你可以使用“intersection”方法：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

要找出哪些成员只参加了其中一个事件，使用“symmetric_difference”方法：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

要找出哪些成员只参加了一个事件而没有参加另一个事件，使用“difference”方法：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

要得到所有参与者的列表，使用“union”方法：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

在下面的练习中，使用给定的列表打印出一个集合，其中包含从活动A中未参加活动B的所有参与者。