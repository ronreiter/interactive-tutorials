### What are Functions?

関数は、コードを便利なブロックに分割する方法であり、コードを整理し、読みやすくし、再利用し、時間を節約することができます。また、関数はプログラマーがコードを共有するための重要な手段です。

### How do you write functions in Python?

以前のチュートリアルで見たように、Pythonはブロックを使用します。

ブロックは、以下の形式で書かれたコードの領域です:

    block_head:
        1st block line
        2nd block line
        ...

ここで、ブロックラインはさらに多くのPythonコード（別のブロックでも可）で構成されており、ブロックヘッドは次の形式です:
block_keyword block_name(argument1,argument2, ...)
あなたがすでに知っているブロックキーワードは "if"、"for"、および "while" です。

Pythonでの関数は、ブロックキーワード "def" を使用して定義され、そのブロック名として関数の名前が続きます。
例:

    def my_function():
        print("Hello From My Function!")

関数はまた、引数（呼び出し元から関数への変数）を受け取ることができます。
例:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

関数は、キーワード 'return' を使用して呼び出し元に値を返すことができます。
例:

    def sum_two_numbers(a, b):
        return a + b

### How do you call functions in Python?

単に関数名の後に () を書き、必要な引数を括弧の中に配置します。
例として、上記の例で書かれた関数を呼び出してみましょう：

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


演習
--------

この演習では、既存の関数を使用しながら、自分の関数を追加して、完全に機能するプログラムを作成します。

1. "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"という文字列のリストを返す`list_benefits()`という名前の関数を追加します。

2. 文字列を含む単一の引数を受け取り、その文字列で始まり、" is a benefit of functions!"で終わる文を返す`build_sentence(info)`という名前の関数を追加します。

3. すべての関数が一緒に動作するのを実行して確認してください！