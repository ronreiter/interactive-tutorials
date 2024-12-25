List Comprehensions 是一个非常强大的工具，它可以基于另一个列表创建一个新列表，仅需一行易读的代码。

例如，假设我们需要创建一个整数列表，该列表指定某个句子中每个单词的长度，但前提是该单词不是“the”。

```python
sentence = "the quick brown fox jumps over the lazy dog"
words = sentence.split()
word_lengths = []
for word in words:
      if word != "the":
          word_lengths.append(len(word))
print(words)
print(word_lengths)
```

使用列表推导式，我们可以将这个过程简化为以下表示法：

```python
sentence = "the quick brown fox jumps over the lazy dog"
words = sentence.split()
word_lengths = [len(word) for word in words if word != "the"]
print(words)
print(word_lengths)
```

练习
--------

使用列表推导式，从列表“numbers”中创建一个名为“newlist”的新列表，其中只包含列表中的正数，并以整数形式呈现。