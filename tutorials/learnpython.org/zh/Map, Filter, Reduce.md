地图（Map）、过滤器（Filter）和化简（Reduce）是函数式编程的范式。它们允许程序员（你）编写更简单、更简短的代码，而不必过多关注像循环和分支这样的复杂性。

本质上，这三个函数允许你应用一个函数到多个可迭代对象上，一次性处理完成。```map``` 和 ```filter``` 是 Python 内置的（在 ```__builtins__``` 模块中），不需要导入。而 ```reduce``` 需要导入，因为它位于 ```functools``` 模块中。让我们先从 ```map``` 开始，更好地理解它们的工作原理。

#### Map
Python 中的 ```map()``` 函数具有以下语法：

```map(func, *iterables)```

其中 ```func``` 是作用于每个 ```iterables```（无论有多少个）元素上的函数。注意 ```iterables``` 前面的星号（```*```）吗？这意味着可以有任意多个可迭代对象，只要 ```func``` 需要该数量的输入参数。在我们进入例子之前，重要的是你要注意以下几点：

1. 在 Python 2 中，```map()``` 函数返回一个列表。而在 Python 3 中，函数返回一个生成器对象 ```map object```。要将结果作为列表，可以对 map 对象调用内置的 ```list()``` 函数。即 ```list(map(func, *iterables))```
2. ```func``` 的参数数量必须是列出的 ```iterables``` 的数量。

让我们通过以下例子看看这些规则如何发挥作用。

假设我有一个我喜欢的宠物名字列表（```iterable```），全是小写的，而且我需要它们变成大写。传统地，在普通的 Python 代码中，我会这样做：

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

这将输出 ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

使用 ```map()``` 函数，不仅更简单，也更灵活。我们可以这样写：

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

这也将输出相同的结果。注意使用定义好的 ```map()``` 语法，在这种情况下，```func``` 是 ```str.upper```，而 ```iterables``` 是 ```my_pets``` 列表——只有一个可迭代对象。还要注意，我们没有调用 ```str.upper``` 函数（这样做：```str.upper()```），因为 map 函数为我们在```my_pets``` 列表的每个元素上调用了该函数。

更重要的是，```str.upper``` 函数定义时只需要 **一个** 参数，所以我们只传递了 **一个** 可迭代对象。如果你传递的函数需要两个或三个或 n 个参数，那么你需要传入两个、三个或 n 个可迭代对象。让我用另一个例子来说明这一点。

假设我有一个圆面积的列表，这些面积我在其他地方计算出来的，精确到五位小数。而我需要四舍五入到相应的位置小数位，这意味着我必须将列表中的第一个元素四舍五入到一个小数位，第二个元素四舍五入到两个小数位，第三个元素到三个小数位，等等。用 ```map()``` 这简直是小菜一碟。让我们看看如何做到。

Python 已经为我们提供了内置的 ```round()``` 函数，它需要两个参数——要四舍五入的数字和四舍五入到的小数位数。所以，由于该函数需要 **两个** 参数，我们需要传入 **两个** 可迭代对象。

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

看到 ```map()``` 的妙用了吧？你能想象这种灵活性带来的快乐吗？

```range(1, 7)``` 函数作为 ```round``` 函数的第二个参数（每次迭代所需的小数位数）。所以当 ```map``` 迭代 ```circle_areas``` 时，在第一次迭代中，```circle_areas``` 的第一个元素 ```3.56773``` 和 ```range(1,7)``` 的第一个元素 ```1``` 一起传递给 ```round```，使其有效地成为 ```round(3.56773, 1)```。在第二次迭代中，```circle_areas``` 的第二个元素 ```5.57668``` 和 ```range(1,7)``` 的第二个元素 ```2``` 传递给 ```round```，使其转换为 ```round(5.57668, 2)```。如此直到达到 ```circle_areas``` 列表的末尾。

我确信你在想："如果我传入的可迭代对象比第一个可迭代对象的长度少或多怎么办？也就是说，如果我将 ```range(1, 3)``` 或 ```range(1, 9999)``` 作为上面函数的第二个可迭代对象传递会如何"。答案很简单：没什么特别的事发生！好吧，这不是真的。"没什么" 是指 ```map()``` 函数不会引发任何异常，它会简单地迭代元素，直到找不到函数的第二个参数，然后它只是停止并返回结果。

例如，如果你计算 ```result = list(map(round, circle_areas, range(1, 3)))```，即使 ```circle_areas``` 的长度和 ```range(1, 3)``` 的长度不同，你也不会得到任何错误。相反，Python 会这样做：它取 ```circle_areas``` 的第一个元素和 ```range(1,3)``` 的第一个元素传递给 ```round```。```round``` 计算它然后保存结果。然后它进入第二次迭代，取 ```circle_areas``` 的第二个元素和 ```range(1,3)``` 的第二个元素，```round``` 再次保存它。现在，在第三次迭代中（```circle_areas``` 有第三个元素），Python 取 ```circle_areas``` 的第三个元素然后尝试取 ```range(1,3)``` 的第三个元素，但由于 ```range(1,3)``` 没有第三个元素，Python 只是停止并返回结果，这种情况下结果是 ```[3.6, 5.58]```。

试试吧。

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

如果 ```circle_areas``` 的长度小于第二个可迭代对象的长度，也是相同的情况。当 Python 无法在其中一个可迭代对象中找到下一个元素时，它就简单地停止。

为了巩固我们对 ```map()``` 函数的理解，我们将使用它来实现我们自己的定制 ```zip()``` 函数。```zip()``` 函数接受多个可迭代对象，然后创建一个包含所有这些可迭代对象中每个元素的元组。像 ```map()``` 一样，在 Python 3 中，它返回一个生成器对象，可以通过调用内置的 ```list``` 函数轻松转化为列表。使用下面的解释器会话来掌握 ```zip()```，然后我们将使用 ```map()``` 创建自己的 ```zip()```。

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

作为一个额外的练习，如果 ```my_strings``` 和 ```my_numbers``` 的长度不同，会发生什么？不知道？试试！改变其中一个的长度。

下面是我们自定义的 ```zip()``` 函数！

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

看看！我们得到了与 ```zip``` 相同的结果。

你也注意到我甚至不需要使用标准方法 ```def my_function()``` 来创建函数吗？这就是 ```map()``` 的灵活性，也是 Python 的灵活性！我简单地使用了一个 ```lambda``` 函数。这并不是说不允许使用标准的函数定义方式（```def function_name()```），当然是允许的。我只是更愿意写更少的代码（更 "Pythonic"）。

这就是关于 map 的全部内容。接下来说说 ```filter()```

#### Filter
当 ```map()``` 通过一个函数传递每个可迭代对象元素并返回所有元素经过函数后的结果时，```filter()``` 首先要求函数返回布尔值（真或假），然后通过函数传递每个可迭代对象元素，"过滤" 掉那些为假的元素。它具有以下语法：

```filter(func, iterable)```

关于 ```filter()``` 需要注意以下几点：

1. 与 ```map()``` 不同，仅需要一个可迭代对象。
2. ```func``` 参数需要返回布尔类型。如果没有，```filter``` 只是返回传入的 ```iterable```。此外，由于只需要一个可迭代对象，所以显然 ```func``` 只能接受一个参数。
3. ```filter``` 通过 ```func``` 传递可迭代对象的每个元素，并**仅返回**那些评估为真的元素。它的名字就说明了这一点——一个“过滤器”。

让我们看一些例子

下面是一个化学考试中 10 名学生的成绩列表（```iterable```）。让我们筛选出成绩超过 75 的学生，使用 ```filter```。

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

下一个例子是一个回文检测器。"回文" 是指无论从前往后读或从后往前读，读法都一样的单词、词组或序列。让我们从一个怀疑是回文的元组（```iterable```）中过滤出回文。

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

这将输出 ```['madam', 'anutforajaroftuna']```。

很赞吧？最后，我们来讲解 ```reduce()```

#### Reduce
```reduce``` 将一个 **有两个参数的函数** 累计应用于一个可迭代对象的元素上，或者以一个初始参数开始。它具有以下语法：

```reduce(func, iterable[, initial])```

其中 ```func``` 是每个元素在 ```iterable``` 上累计应用的函数，```initial``` 是在计算中放在可迭代对象元素之前的可选值，或者在可迭代对象为空时作为默认值。关于 ```reduce()``` 应注意以下几点：
1. ```func``` 需要两个参数，其一是 ```iterable``` 中的第一个元素（如果未提供 ```initial```），另一个是 ```iterable``` 中的第二个元素。如果提供了 ```initial```，它将成为 ```func``` 的第一个参数，而 ```iterable``` 的第一个元素成为第二个元素。
2. ```reduce``` 将 ```iterable``` "化简" 为一个单一值。 

像往常一样，让我们看一些例子。

让我们创建一个自定义版本的 Python 内置 ```sum()``` 函数。```sum()``` 函数返回传递给它的可迭代对象中所有项的和。

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

正如预期的结果是 ```68```。

那么，发生了什么呢？

像往常一样，这一切都是关于迭代：```reduce``` 取 ```numbers``` 中的第一个和第二个元素并分别传递给 ```custom_sum```。```custom_sum``` 计算它们的和并返回给 ```reduce```。```reduce``` 然后取该结果并应用作为 ```custom_sum``` 的第一个元素，而取 ```numbers``` 中的下一个元素（第三个）作为 ```custom_sum``` 的第二个元素。它不断地（累计地）这样做，直到耗尽 ```numbers```。

让我们看看使用可选的 ```initial``` 值会发生什么。

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

正如你所预期的，结果是 ```78```，因为 ```reduce``` 最初使用 ```10``` 作为 ```custom_sum``` 的第一个参数。

以上就是 Python 的地图、化简和过滤器的全部内容。尝试以下练习以帮助确定你对每个函数的理解。

练习
--------
在这个练习中，你将使用```map```、```filter``` 和 ```reduce``` 来修复损坏的代码。