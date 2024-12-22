Pythonで部分関数を作成するには、functoolsライブラリのpartial関数を使用します。

部分関数を使用すると、x個のパラメーターを持つ関数から、パラメーターが少なく、値が固定された関数を派生させることができます。

必要なインポート:

    from functools import partial

このコードは8を返します。

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # 2で掛け算する新しい関数を作成
    dbl = partial(multiply, 2)
    print(dbl(4))

重要な注意点: デフォルト値は左から変数を置き換え始めます。この例では2がxに置き換わります。dbl(4)が呼び出されたとき、yは4になります。この例では違いはありませんが、以下の例では違いがあります。

Exercise
--------
func()の最初の3つの変数をpartial()を使用して置き換えることで、指定された関数を編集してください。その後、新しい部分関数を使って、出力が60になるように1つの入力変数だけで印刷してください。