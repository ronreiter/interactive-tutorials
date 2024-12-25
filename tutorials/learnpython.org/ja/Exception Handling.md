プログラミングをしているとエラーは避けられないものです。ユーザーが不適切な入力をした、ネットワークリソースが利用できなかった、プログラムがメモリを使い切った、あるいはプログラマーが間違えた、などの理由が考えられます。

Pythonにおけるエラーへの対処法は例外です。例外を目にしたことがあるかもしれません。

    print(a)
    
    #エラー
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

おっと！ 'a' という変数に値を割り当てるのを忘れました。

しかし、時には例外がプログラムを完全に停止させないようにしたい場合もあります。例外が発生したときに特別なことをしたいかもしれません。これを実現するのが *try/except* ブロックです。

ここに簡単な例があります。あなたがリストを反復処理しているとしましょう。20個の数字を反復処理する必要があるのですが、リストはユーザーの入力によって作成されているため、20個の数字が含まれていないかもしれません。リストの末尾に達したら、残りの数字を0として解釈したいと考えます。そのやり方は次の通りです。

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # リストの存在しないインデックスにアクセスしたときに発生
                do_stuff_with_number(0)
    
    catch_this()

簡単でしたね！この方法はどんな例外にも適用できます。例外の処理に関する詳細は、[Pythonのドキュメント](http://docs.python.org/tutorial/errors.html#handling-exceptions)をご覧ください。

Exercise
--------

すべての例外を処理しましょう！以前のレッスンを振り返って、俳優の姓を返してください。