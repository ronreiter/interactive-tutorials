A Closureは、メモリに存在しない場合でも囲むスコープ内の値を記憶する関数オブジェクトです。それを順を追って見ていきましょう。

まず、**ネストされた関数**とは、他の関数の内部で定義された関数です。ネストされた関数は囲むスコープの変数にアクセスできる点が非常に重要です。ただし、少なくともPythonでは、それらは読み取り専用です。しかし、これらの変数を変更するために「nonlocal」キーワードを明示的に使用することができます。

例えば:

    def transmit_to_space(message):
        "これは囲む関数です"
        def data_transmitter():
            "これはネストされた関数です"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("テストメッセージ"))

この例は、'data_transmitter'関数が'message'にアクセスできるため、うまく機能します。「nonlocal」キーワードを使用する例として以下をご覧ください。

    def print_msg(number):
        def printer():
            "ここではnonlocalキーワードを使用しています"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

nonlocalキーワードを使わない場合、出力は「3 9」となりますが、使用すると「3 3」となり、「number」変数の値が変更されます。

次に、ネストされた関数をその場で呼び出すのではなく、関数オブジェクトを返してみましょう。（関数もオブジェクトです。（これがPythonです。））

    def transmit_to_space(message):
        "これは囲む関数です"
        def data_transmitter():
            "これはネストされた関数です"
            print(message)
        return data_transmitter

そして次のように関数を呼び出します：

      def transmit_to_space(message):
        "これは囲む関数です"
        def data_transmitter():
            "これはネストされた関数です"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

「transmit_to_space()」の実行が終了したにもかかわらず、メッセージは保存されました。このように、元の他の関数が終了してもデータがコードに付随する手法がPythonにおけるクロージャと呼ばれます。

利点：クロージャは、グローバル変数の使用を回避し、データ隠蔽を提供します。（例えば、クラス内にいくつかのメソッドがあるとき、クロージャを使用します。）

また、Pythonのデコレータはクロージャを広範囲に利用しています。

Exercise
--------

クロージャを使って複数の掛け算関数を作成するためのネストされたループとPythonクロージャを作りましょう。つまり、クロージャを利用することで、multiply_with_5()やmultiply_with_4()関数を作成するための関数を作ることができます。