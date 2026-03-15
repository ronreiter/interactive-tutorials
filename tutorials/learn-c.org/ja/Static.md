Tutorial
--------

`static` はCプログラミング言語のキーワードです。変数や関数で使用できます。

しかし、同じ`static`でも、変数と関数で、まったく効果が異なる点は、注意が必要です。

### static変数とは？

変数はデフォルトではローカル変数で、それが定義されたスコープ内でのみ有効です。しかし、変数をstatic変数として宣言することで、その変数を含むファイル全体にスコープを拡張できます。その結果、これらの変数はファイル内のどこからでもアクセスできるようになります。

レースに参加するランナーの数をカウントしたいという次のシナリオを考えてみましょう。

    #include<stdio.h>
    int runner() {
        int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

`count` は関数の完了と同時にメモリから削除されるので、継続してカウントアップされることはありません。しかし、`static` を使用すると、期待通りの結果が得られます。

    #include<stdio.h>
    int runner()
    {
        static int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

### static関数とは？

C言語では、関数はデフォルトでグローバルです。しかし、`static` を使って関数を宣言すると、その関数のスコープはその関数を含むファイル内に縮小されます。

構文は次のようになります。

    static void fun(void) {
       printf("I am a static function.");
    }

### static変数とグローバル変数の違い

static変数は、その変数を含むファイル内でのみアクセス可能なため、特定のファイル内でのみアクセス可能です。一方、グローバル変数はファイル外からもアクセスできます。

Exercise
--------

この演習では、staticキーワードを使っていくつかの数値の合計を計算してみましょう。`sum()`関数には、累計を表す変数を渡さないでください。

Tutorial Code
-------------

   #include <stdio.h>
   int sum (int num) {
       /**
       * * n 個の数値の合計を求める
       */
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

Expected Output
---------------

   55 100 150

Solution
----

   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

