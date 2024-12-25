Strings 是一段文本。它们可以被定义为引号之间的任何内容：

astring = "Hello world!"
astring2 = 'Hello world!'

如你所见，你学到的第一件事是打印一个简单的句子。这个句子被 Python 存储为一个字符串。然而，在直接打印字符串之前，我们将探索可以对它们进行的各种操作。
你也可以使用单引号来分配一个字符串。然而，如果要分配的值本身包含单引号，就会遇到问题。例如，要使用这些括号内的字符串（单引号是 ' '），你需要只使用双引号，如下所示：

astring = "Hello world!"
print("single quotes are ' '")

print(len(astring))

这将打印出 12，因为 "Hello world!" 是 12 个字符长，包括标点和空格。

astring = "Hello world!"
print(astring.index("o"))

这将打印出 4，因为字母 "o" 第一次出现的位置距离第一个字符有 4 个字符。注意短语中实际上有两个 o —— 这个方法只识别第一个。

但为什么不打印出 5 呢？"o" 不是字符串中的第五个字符吗？为了简化事情，Python（和大多数其他编程语言）从 0 开始计数，而不是从 1 开始。所以 "o" 的索引是 4。

astring = "Hello world!"
print(astring.count("l"))

对于那些使用滑稽字体的人来说，那是一个小写的 L，不是数字一。这会计算字符串中 l 的数量。因此，它应该打印出 3。

astring = "Hello world!"
print(astring[3:7])

这打印出字符串的一部分，从索引 3 开始，到索引 6 结束。为什么是 6 而不是 7 呢？同样，大多数编程语言都这样做——这使得在那些括号内进行数学运算更容易。

如果你在括号中只有一个数字，它将给出该索引处的单个字符。如果你省略第一个数字但保留冒号，它将从开始到你留下的数字处给你一个片段。如果你省略第二个数字，它将从第一个数字到结尾给你一个片段。

你甚至可以在括号中放入负数。它们是从字符串结尾而不是开头开始的简单方法。因此，-3 的意思是“从末尾数起的第三个字符”。

astring = "Hello world!"
print(astring[3:7:2])

这打印出从 3 到 7 的字符串字符，跳过一个字符。这是扩展的切片语法。一般形式是 [start:stop:step]。

astring = "Hello world!"
print(astring[3:7])
print(astring[3:7:1])

注意，它们都产生相同的输出。

在 C 中没有类似 strrev 的函数来反转字符串。但是使用上面提到的切片语法，你可以轻松地反转字符串，如下所示：

astring = "Hello world!"
print(astring[::-1])

这个

astring = "Hello world!"
print(astring.upper())
print(astring.lower())

这些分别创建一个将所有字母转换为大写和小写的新字符串。

astring = "Hello world!"
print(astring.startswith("Hello"))
print(astring.endswith("asdfasdfasdf"))

这分别用于确定字符串是否以某个内容开始或结束。第一个将打印 True，因为字符串以 "Hello" 开始。第二个将打印 False，因为字符串肯定不是以 "asdfasdfasdf" 结束。

astring = "Hello world!"
afewwords = astring.split(" ")

这将字符串分成一串合并在一起的字符串列表。由于此示例在空格处分割，列表中的第一个项目将是 "Hello"，第二个是 "world!"。

Exercise
--------

尝试通过更改字符串来修复代码，以打印出正确的信息。