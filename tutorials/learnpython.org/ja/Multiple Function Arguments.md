すべてのPythonの関数は、通常の宣言であれば、あらかじめ定義された数の引数を受け取ります。このように：

```python
def myfunction(first, second, third):
    # 3つの変数で何かを行う
    ...
```

可変数の引数を受け取る関数を宣言することも可能です。以下の構文を使用します。

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

「therest」変数は変数のリストで、「foo」関数に最初の3つの引数の後に与えられたすべての引数を受け取ります。したがって、`foo(1, 2, 3, 4, 5)`と呼び出すと、次のように出力されます。

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))
    
foo(1, 2, 3, 4, 5)
```

キーワードを使用して関数の引数を送信することも可能なので、引数の順序は重要ではなくなります。次の構文を使用します。以下のコードは次の出力を生成します：
```
The sum is: 6
Result: 1
```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

「bar」関数は3つの引数を受け取ります。追加の「action」引数が受け取られ、それが数を合計するように指示すると、合計が表示されます。あるいは、「number」パラメーターの値が「first」と等しい場合に、関数は最初の引数を返す必要があることも知っています。

エクササイズ
--------

`foo`と`bar`関数を完成させて、可変数の引数（3つ以上）を受け取れるようにしましょう。 `foo`関数は、受け取った追加の引数の数を返さなければなりません。 `bar`は、キーワード`magicnumber`が7に相当する場合は`True`を返し、そうでない場合は`False`を返す必要があります。