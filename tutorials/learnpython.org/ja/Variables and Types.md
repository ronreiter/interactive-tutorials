Pythonは完全にオブジェクト指向であり、「静的型付け」ではありません。使用する前に変数を宣言したり、その型を宣言したりする必要はありません。Pythonの全ての変数はオブジェクトです。

このチュートリアルでは、いくつかの基本的な変数の型について説明します。

### Numbers
Pythonは2種類の数値をサポートしています - 整数（全体数）と浮動小数点数（小数）。（また、複素数もサポートしていますが、このチュートリアルでは説明しません）。

整数を定義するには、次のような構文を使用します:

    myint = 7
    print(myint)

浮動小数点数を定義するには、次のいずれかの表記を使用できます:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

文字列はシングルクォートまたはダブルクォートで定義されます。

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

両者の違いは、ダブルクォートを使用するとアポストロフィを含めやすくなることです（シングルクォートを使用すると文字列が終了してしまうため）。

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
キャリッジリターン、バックスラッシュ、ユニコード文字などを含めやすくするための文字列定義の追加のバリエーションがあります。これらはこのチュートリアルの範囲を超えていますが、[Pythonのドキュメント](http://docs.python.org/tutorial/introduction.html#strings "Pythonの文字列チュートリアル")で説明されています。

数値や文字列に対して単純な演算を実行できます:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

変数の「同時」割り当ては次のように同じ行で行うことができます

    a, b = 3, 4
    print(a, b)

数値と文字列の間でオペレータを混ぜることはサポートされていません:

    # これは動作しません!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

この演習の目的は、文字列、整数、および浮動小数点数を作成することです。文字列の名前は `mystring` とし、単語「hello」を含める必要があります。浮動小数点数の名前は `myfloat` とし、数値 10.0 を含める必要があります。そして整数の名前は `myint` とし、数値 20 を含める必要があります。