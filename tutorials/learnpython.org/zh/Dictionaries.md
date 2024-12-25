字典是一种类似于数组的数据类型，但使用键和值而不是索引。在字典中存储的每个值都可以通过键来访问，键可以是任意类型的对象（字符串、数字、列表等），而不是通过索引来进行访问。

例如，电话号码数据库可以使用字典来存储，如下所示：

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

或者，一个字典可以使用以下表示法进行初始化：

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### 在字典中迭代

字典可以像列表一样进行迭代。然而，与列表不同，字典不保持其中存储值的顺序。要迭代键值对，请使用以下语法：

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### 移除一个值

要移除指定的索引，可以使用以下任一种表示法：

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

或：

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

练习
--------

将“Jake”添加到电话簿中，其电话号码为938273443，并从电话簿中删除Jill。