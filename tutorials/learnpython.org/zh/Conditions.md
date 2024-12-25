Python 使用布尔逻辑来评估条件。当一个表达式被比较或评估时，会返回布尔值 True 和 False。例如：

```python
x = 2
print(x == 2) # 输出 True
print(x == 3) # 输出 False
print(x < 3) # 输出 True
```

注意，变量赋值用单个等号“=”，而两个变量的比较则用双等号“==”。“不等于”运算符表示为“!=”。

### 布尔运算符

“and”和“or”布尔运算符允许构建复杂的布尔表达式，例如：

```python
name = "John"
age = 23
if name == "John" and age == 23:
    print("Your name is John, and you are also 23 years old.")

if name == "John" or name == "Rick":
    print("Your name is either John or Rick.")
```

### "in" 运算符

“in”运算符可以用来检查指定对象是否存在于可迭代对象容器中，例如列表：

```python
name = "John"
if name in ["John", "Rick"]:
    print("Your name is either John or Rick.")
```

Python 使用缩进来定义代码块，而不是括号。标准的 Python 缩进是 4 个空格，虽然制表符和其他任意数量的空格也可以，只要保持一致即可。注意，代码块不需要任何终止符。

这是一个使用 Python "if" 语句的代码块示例：

```python
statement = False
another_statement = True
if statement is True:
    # 做某事
    pass
elif another_statement is True: # 否则如果
    # 做其他事
    pass
else:
    # 做另一件事
    pass
```

例如：

```python
x = 2
if x == 2:
    print("x equals two!")
else:
    print("x does not equal to two.")
```

如果以下其中之一正确，则语句被评估为真：
1. 给定了布尔变量 "True"，或者通过表达式计算得出，例如算术比较。
2. 传递了一个不被认为是“空”的对象。

以下是一些被认为是空的对象示例：
1. 空字符串：""
2. 空列表：[]
3. 数字零：0
4. 布尔变量 False: False

### 'is' 运算符

与双等号运算符“==”不同，“is”运算符不匹配变量的值，而是匹配实例本身。例如：

```python
x = [1,2,3]
y = [1,2,3]
print(x == y) # 输出 True
print(x is y) # 输出 False
```

### "not" 运算符

在布尔表达式前使用“not”会反转它：

```python
print(not False) # 输出 True
print((not False) == (False)) # 输出 False
```

Exercise
--------

更改第一部分的变量，使每个 if 语句的结果为 True。