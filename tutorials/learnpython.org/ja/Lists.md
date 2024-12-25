リストは配列に非常によく似ています。リストは任意のタイプの変数を含むことができ、任意の数の変数を含むことができます。リストは非常に簡単な方法で反復処理することもできます。以下は、リストを構築する方法の例です。

```python
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
```

存在しないインデックスにアクセスしようとすると、例外（エラー）が発生します。

```python
mylist = [1,2,3]
print(mylist[10])
```

Exercise
--------

この演習では、"append" リストメソッドを使用して、正しいリストに数値と文字列を追加する必要があります。数値リストには数値 1, 2, および 3 を追加し、文字列変数には 'hello' および 'world' という単語を追加しなければなりません。

また、ブラケット演算子 `[]` を使用して、names リストの2番目の名前を second_name 変数に埋め込む必要があります。インデックスは0から始まることに注意してください。したがって、リストの2番目の項目にアクセスしたい場合、そのインデックスは1になります。