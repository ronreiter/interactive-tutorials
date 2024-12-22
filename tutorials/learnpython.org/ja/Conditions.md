Pythonは、ブール論理を使用して条件を評価します。式が比較または評価されると、ブール値のTrueおよびFalseが返されます。例えば：

x = 2
print(x == 2) # Trueを出力します
print(x == 3) # Falseを出力します
print(x < 3) # Trueを出力します

変数の代入は単一の等号演算子 "=" を使用して行われる一方で、2つの変数間の比較は二重等号演算子 "==" を使用して行われます。"not equals" 演算子は "!=" として記されています。

### Boolean operators

"and" および "or" のブール演算子を使用すると、複雑なブール式を構築できます。たとえば：

name = "John"
age = 23
if name == "John" and age == 23:
    print("あなたの名前はJohnで、また23歳です。")

if name == "John" or name == "Rick":
    print("あなたの名前はJohnまたはRickのいずれかです。")

### The "in" operator

"in" 演算子は、指定されたオブジェクトがリストのような反復可能なオブジェクトコンテナ内に存在するかどうかを確認するために使用できます：

name = "John"
if name in ["John", "Rick"]:
    print("あなたの名前はJohnまたはRickのいずれかです。")

Pythonは中括弧の代わりにインデントを使用してコードブロックを定義します。標準のPythonインデントは4スペースですが、タブや他のスペースサイズでも、一貫していれば動作します。コードブロックには終了が必要ありません。

以下は、Pythonの "if" ステートメントをコードブロックで使用する例です：

statement = False
another_statement = True
if statement is True:
    # do something
    pass
elif another_statement is True: # else if
    # do something else
    pass
else:
    # do another thing
    pass

例えば：

x = 2
if x == 2:
    print("xは2です！")
else:
    print("xは2ではありません。")

以下のいずれかが正しい場合、ステートメントは真と評価されます：
1. "True" のブール変数が与えられるか、算術比較のような式で計算される。
2. "空" と見なされないオブジェクトが渡される。

以下は、"空" と見なされるオブジェクトの例です：
1. 空文字列: ""
2. 空リスト: []
3. ゼロの数: 0
4. falseのブール変数: False

### The 'is' operator

二重等号演算子 "==" とは異なり、"is" 演算子は変数の値ではなく、インスタンス自体を比較します。例えば：

x = [1,2,3]
y = [1,2,3]
print(x == y) # Trueを出力します
print(x is y) # Falseを出力します

### The "not" operator

"not" をブール式の前に使用すると、式が逆転します：

print(not False) # Trueを出力します
print((not False) == (False)) # Falseを出力します

Exercise
--------

最初のセクションで変数を変更し、各ifステートメントがTrueとなるようにしてください。