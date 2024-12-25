Python 提供了内置的 JSON 库来编码和解码 JSON。

在 Python 2.5 中，使用 simplejson 模块，而在 Python 2.7 中，使用 json 模块。由于这个解释器使用 Python 2.7，我们将使用 json。

要使用 json 模块，必须先导入：

    import json

JSON 数据有两种基本格式。 可以是字符串格式或对象数据结构。在 Python 中，对象数据结构由相互嵌套的列表和字典组成。对象数据结构允许使用 Python 方法（适用于列表和字典）来添加、列出、搜索和删除数据结构中的元素。字符串格式主要用于将数据传递到另一个程序中或加载到数据结构中。

要将 JSON 加载回数据结构，请使用 "loads" 方法。 这个方法接收一个字符串并将其转换回 json 对象数据结构：

    import json 
    print(json.loads(json_string))

要将数据结构编码为 JSON，请使用 "dumps" 方法。 这个方法接收一个对象并返回一个字符串：

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python 支持一种称为 pickle 的 Python 专有数据序列化方法（和一种较快的替代方法，称为 cPickle）。

你可以完全相同地使用它。

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Exercise--------

此练习的目的是在 JSON 字符串中添加键值对 "Me" : 800 并打印出来。