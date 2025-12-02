チュートリアル
-------------
 
再帰は、関数内に自分自身の呼び出しが含まれている場合に発生します。再帰により、非常に簡潔で洗練された、直感的に理解しやすいコードを作成できます。ただし、再帰が深くなりすぎると、大量のメモリが消費される可能性があります。
 
再帰が使用される一般的な例：

* リンクリスト、二分木などの再帰データ構造の探索
* チェスなどのゲームにおけるシナリオの探索
 
再帰は常に2つの主要な部分から構成されます。再帰がいつ終了するかを示す終了ケースと、終了ケースに向かって進む必要がある自分自身の呼び出しです。

例えば、この関数は再帰的に加算することで乗算を実行します。

    #include <stdio.h>

    unsigned int multiply(unsigned int x, unsigned int y)
    {
        if (x == 1)
        {
            /* 終了させる */
            return y;
        }
        else if (x > 1)
        {
            /* 再帰ステップ */
            return y + multiply(x-1, y);
        }
 
        /* xが0のとき */
        return 0;
    }

    int main() {
        printf("3 times 5 is %d", multiply(3, 5));
        return 0;
    }
 
演習
----
 
再帰乗算によって階乗を計算する `factorial()` という新しい関数を定義します (5! = 5 x 4 x 3 x 2 x 1)。慣例により、0の階乗は1に等しい (0! = 1) ことに注意してください。
 
チュートリアル コード
-------------------

    #include <stdio.h>

    int main() {
        /* テスト用コード */
        printf("0! = %i\n", factorial(0));
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }
    
    /* ここで関数を定義します（宣言することを忘れないでください） */

期待している出力
---------------

    0! = 1
    1! = 1
    3! = 6
    5! = 120

解答
----

    #include <stdio.h>

    int factorial(int number);

    int main() {
        /* テスト用コード */
        printf("0! = %i\n", factorial(0));
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }

    int factorial(int number) {
        if (number > 1) {
            return number * factorial(number-1);
        }
        else {
	           return 1;
        }
    }
