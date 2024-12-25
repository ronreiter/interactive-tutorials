オブジェクトは、変数と関数を単一のエンティティにカプセル化したものです。オブジェクトはクラスからその変数と関数を取得します。クラスは基本的にオブジェクトを作成するためのテンプレートです。

非常に基本的なクラスは次のようになります：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

後で、「self」をパラメータとして含める必要がある理由を説明します。 まず、上記のクラス（テンプレート）をオブジェクトに割り当てるには、次のようにします：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

これで、変数「myobjectx」は、クラス「MyClass」のオブジェクトを保持し、その中に定義されている変数と関数が含まれています。

### オブジェクト変数へのアクセス

新しく作成したオブジェクト「myobjectx」内の変数にアクセスするには、以下のようにします：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

例えば、以下のコードは文字列「blah」を出力します：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

同じクラス（同じ変数と関数が定義されている）の異なるオブジェクトを複数作成できます。しかし、各オブジェクトは、クラスに定義されている変数の独立したコピーを持ちます。例えば、「MyClass」クラスの別のオブジェクトを定義し、上記の変数内の文字列を変更すると：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # 両方の値を出力します
    print(myobjectx.variable)
    print(myobjecty.variable)

### オブジェクト関数へのアクセス

オブジェクト内の関数にアクセスするには、変数にアクセスする場合と同様の表記を使用します：

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

上記のコードは、「This is a message inside the class.」というメッセージを出力します。

### __init__()

`__init__()` 関数は、クラスが初期化されるときに呼び出される特別な関数です。
クラス内で値を割り当てるために使用されます。

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # '7' を出力します
    
Exercise
--------

車両のために定義されたクラスがあります。car1とcar2という2つの新しい車両を作成してください。
car1は赤いコンバーチブルで、価値は$60,000.00で、名前はFerに設定します。そしてcar2は青いバンで、名前はJumpであり、価値は$10,000.00です。