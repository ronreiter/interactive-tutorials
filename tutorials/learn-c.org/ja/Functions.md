Tutorial
--------

C関数はシンプルですが、C言語の仕組み上、その威力には多少の限界があります。

* 関数は、固定数または可変数の引数を受け取ります。
* 関数は1つの値のみを返すか、値を返さないかのいずれかです。

C言語では、引数は関数に値としてコピーされます。つまり、関数外で引数の値を変更して変更することはできません。
そのためには、後ほど説明するポインタを使用する必要があります。

関数は以下の構文で定義されます。

    int foo(int bar) {
        /* 何かをする */
        return bar * 2;
    }

    int main() {
        foo(1);
    }

定義した関数 `foo` は、`bar` という1つの引数を受け取ります。受け取った整数をを2倍して結果を返します。

引数 `bar` に1を指定して関数 `foo` を実行するには、次の構文を使用します。

    foo(1);

C言語では、関数はコード内で使用される前に定義される必要があります。関数は最初に宣言し、後でヘッダーファイルやC言語ファイルの先頭で実装します。また、使用される順序で実装することもできます（こちらはあまり推奨されません）。

関数の正しい使用方法は次のとおりです。

    /* 関数宣言 */
    int foo(int bar);

    int main() {
        /* main から foo を呼ぶ */
        printf("The value of foo is %d", foo(1));
    }

    int foo(int bar) {
        return bar + 1;
    }

キーワード `void` を使用して、値を返さない関数を作成することもできます。

    void moo() {
        /* 何かを実行するが、値を返さない */
    }

    int main() {
        moo();
    }

Exercise
--------

`print_big` という関数を作成してください。この関数は、引数（整数）を1つ受け取り、引数が10より大きい数値の場合に `x is big`（x は引数）という行を出力します。

* **重要**: printf 文字列の末尾に改行文字 `\n` を追加することを忘れないでください。

Tutorial Code
-------------

    #include <stdio.h>

    /* 関数宣言 */
    void print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    /* あなたの関数をここに書く */

Expected Output
---------------

    11 is big
    22 is big
    33 is big

Solution
----

    #include <stdio.h>

    /* 関数宣言 */
    void print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    void print_big(int number){
        if(number > 10){
            printf("%d is big\n",number);
        }
    }

