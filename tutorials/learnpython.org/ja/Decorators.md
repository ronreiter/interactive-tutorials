デコレータを使用すると、[関数](http://www.learnpython.org/en/Functions "")、[メソッド、およびクラス](http://www.learnpython.org/en/Classes%20and%20Objects "")のような呼び出し可能なオブジェクトに対して簡単な修正を行うことができます。このチュートリアルでは関数を扱います。構文としては

    @decorator
    def functions(arg):
        return "value"

は次と同等です：

    def function(arg):
        return "value"
    function = decorator(function) # これは関数をデコレータに渡し、それを関数に再割り当てします

ご覧のとおり、デコレータは関数を受け取って返す別の関数にすぎません。例えば、このようにすることができます：

    def repeater(old_function):
        def new_function(*args, **kwds): # *args と **kwds の動作については learnpython.org/en/Multiple%20Function%20Arguments を参照してください
            old_function(*args, **kwds) # 古い関数を実行
            old_function(*args, **kwds) # 2回実行します
        return new_function # 新しい関数を返さないとそれに再割り当てされません

これにより、関数が2回繰り返されます。

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

出力を変更することもできます

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # 戻り値を変更
        return new_function

入力を変更

    def double_Ii(old_function):
        def new_function(arg): # 古い関数が1つの引数を持つ場合のみ機能します
            return old_function(arg * 2) # 渡される引数を変更
        return new_function

およびチェックを行います。

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # これはエラーを発生させ、誤った動作をするよりも良いです
            old_function(arg)
        return new_function

例えば、出力を変数の量で乗算したいとします。この場合、デコレータを定義して次のように使用できます：

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # 新しいジェネレータを返します
    
    # 使用方法
    @multiply(3) # multiply はジェネレータではありませんが、multiply(3) はジェネレータです
    def return_num(num):
        return num
        
    # これで return_num はデコレートされて再割り当てされます
    return_num(5) # これは15を返すはずです

古い関数を使って何でもできます。場合によっては完全に無視することもできます！高度なデコレータは、ドキュメントストリングや引数の数を操作することもできます。さまざまなデコレータを見つけるには、<http://wiki.python.org/moin/PythonDecoratorLibrary>をご覧ください。

Exercise
--------

1つの引数を持つ関数をデコレートするデコレータを返すデコレータファクトリを作成してください。ファクトリは1つの引数、つまり型を受け取り、関数が入力の型を確認することを目的としたデコレータを返すべきです。もし間違っていた場合は、print("Bad Type") と表示されなければなりません（現実にはエラーを発生させるべきですが、このチュートリアルではエラー発生については扱いません）。チュートリアルコードと期待される出力を見て、それが何であるか確認してください（私だったら混乱するでしょう）。isinstance(object, type_of_object) や type(object) が役立つかもしれません。