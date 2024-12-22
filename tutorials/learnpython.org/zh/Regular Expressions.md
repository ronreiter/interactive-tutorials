正则表达式（有时缩写为regexp, regex, 或 re）是一种用于匹配文本模式的工具。在Python中，我们有re模块。正则表达式的应用范围很广，但它们相当复杂，因此在考虑使用正则表达式处理某个任务时，先考虑其他替代方案，最后再选择使用正则表达式。

一个正则表达式的示例是 `r"^(From|To|Cc).*?python-list@python.org"` 现在解释一下：
插入符号 `^` 匹配行首的文本。接下来的组，即包含`(From|To|Cc)`的部分表示行必须以用管道符号`|`分开的词之一开头。这称为OR运算符，并且如果行以组中的任何单词开头，则正则表达式将匹配。`.*?`表示非贪婪地匹配除换行符`\n`之外的任意数量的字符。非贪婪部分意味着尽可能少地匹配重复。`.`字符表示任何非换行字符，`*`表示重复0次或多次，而`?`字符使其成为非贪婪。

因此，以下几行将与该正则表达式匹配：
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

关于re语法的完整参考可在[python docs](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax)找到。

关于“正确”电子邮件匹配正则表达式的示例（如练习中的），请参见[此处](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)