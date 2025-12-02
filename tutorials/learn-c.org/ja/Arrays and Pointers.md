チュートリアル
-------------

以前の[[ポインタ]]に関するチュートリアルでは、特定のデータ型へのポインタは、そのデータ型の任意の変数のアドレスを格納できることを学びました。例えば、次のコードでは、ポインタ変数 `pc` は文字変数 `c` のアドレスを格納しています。

    char c = 'A';
    char *pc = &c;

ここで、`c` は単一の値しか格納できないスカラー変数です。しかし、連続して割り当てられたメモリブロックに同じデータ型の複数の値を保持できる配列については既にご存知でしょう。では、配列へのポインタも使用できるのだろうかと疑問に思うかもしれません。はい、可能です。

まずはサンプルコードとその出力を見てみましょう。その後、その動作について説明します。

    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;
    int i;

    // 住所を印刷する
    for (i = 0; i < 5; i++) {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // 値を印刷する
    for (i = 0; i < 5; i++) {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

上記コードの典型的な出力を以下に示します。

>&vowels[0]: 0x7ffee146da17, pvowels + 0: 0x7ffee146da17, vowels + 0: 0x7ffee146da17
>
>&vowels[1]: 0x7ffee146da18, pvowels + 1: 0x7ffee146da18, vowels + 1: 0x7ffee146da18
>
>&vowels[2]: 0x7ffee146da19, pvowels + 2: 0x7ffee146da19, vowels + 2: 0x7ffee146da19
>
>&vowels[3]: 0x7ffee146da1a, pvowels + 3: 0x7ffee146da1a, vowels + 3: 0x7ffee146da1a
>
>&vowels[4]: 0x7ffee146da1b, pvowels + 4: 0x7ffee146da1b, vowels + 4: 0x7ffee146da1b
>
>vowels[0]: A, \*(pvowels + 0): A, *(vowels + 0): A
>
>vowels[1]: E, \*(pvowels + 1): E, *(vowels + 1): E
>
>vowels[2]: I, \*(pvowels + 2): I, *(vowels + 2): I
>
>vowels[3]: O, \*(pvowels + 3): O, *(vowels + 3): O
>
>vowels[4]: U, \*(pvowels + 4): U, *(vowels + 4): U



ご想像のとおり、`&vowels[i]` は配列 `vowels` の *i* 番目の要素のメモリ位置を表します。さらに、これは文字配列であるため、各要素は 1 バイトを占有し、連続するメモリアドレスは 1 バイトで区切られます。また、ポインタ `pvowels` を作成し、配列 `vowels` のアドレスをそれに代入しました。`pvowels + i` は有効な演算ですが、一般的には必ずしも意味を持つとは限りません ([[ポインタ演算]] で詳しく説明します)。特に、上記の出力は `&vowels[i]` と `pvowels + i` が同等であることを示しています。配列変数とポインタ変数のデータ型を自由に変更して、これをテストしてみてください。

前のコードをよく見ると、`vowels + i` という、一見意外な記法も使われていることに気づくでしょう。さらに、`pvowels + i` と `vowels + i` は同じもの、つまり配列 `vowels` の *i* 番目の要素のアドレスを返します。一方、`*(pvowels + i)` と `*(vowels + i)` はどちらも配列 `vowels` の *i* 番目の要素を返します。なぜでしょうか？

これは、配列の名前自体が配列の最初の要素への（定数）ポインタであるためです。つまり、`vowels`、`&vowels[0]`、`vowels + 0` という記法はすべて同じ位置を指しているのです。

配列の動的メモリ割り当て
------------------------

ここまでで、ポインタを使って配列を走査できることをご理解いただけたと思います。さらに、ブロックポインタを使って（連続した）メモリを動的に確保できることも分かりました。これら2つの要素を組み合わせることで、配列のメモリを動的に確保することができます。これは以下のコードで示されています。

    // 5文字を格納するためのメモリを割り当てる
    int n = 5;
    char *pvowels = (char *) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    *(pvowels + 2) = 'I';
    pvowels[3] = 'O';
    *(pvowels + 4) = 'U';

    for (i = 0; i < n; i++) {
        printf("%c ", pvowels[i]);
    }

    printf("\n");

    free(pvowels);

上記のコードでは、5文字を格納するために連続する5バイトのメモリを割り当てました。その後、配列表記法を使用して、`pvowels` が配列であるかのようにメモリブロックを走査しました。ただし、`pvowels` は実際にはポインタであることに注意してください。一般的に、ポインタと配列は同じではありません。

では、これはどのような場合に便利なのでしょうか？ 配列を宣言する際には、その要素数を事前に把握しておく必要があることを覚えておいてください。そのため、場合によっては、配列に割り当てられる領域が目的の領域よりも少なかったり、多すぎたりすることがあります。しかし、動的メモリ割り当てを使用すれば、プログラムに必要なだけのメモリを割り当てることができます。さらに、未使用のメモリは不要になったらすぐに「free()」関数を呼び出して解放できます。ただし、動的メモリ割り当ての欠点は、必要な場合に「free()」を責任を持って呼び出す必要があることです。そうしないと、メモリリークが発生します。

このチュートリアルの最後に、2次元配列の動的メモリ割り当てについて見ていきます。これは同様の方法でn次元配列にも一般化できます。1次元配列ではポインタを使用していましたが、この場合は以下に示すように、ポインタへのポインタが必要になります。

    int nrows = 2;
    int ncols = 5;
    int i, j;

    // nrowsポインタにメモリを割り当てる
    char **pvowels = (char **) malloc(nrows * sizeof(char *));

    // 各行にncols要素のメモリを割り当てる
    pvowels[0] = (char *) malloc(ncols * sizeof(char));
    pvowels[1] = (char *) malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++) {
        for(j = 0; j < ncols; j++) {
            printf("%c ", pvowels[i][j]);
        }

        printf("\n");
    }

    // 個々の行を解放する
    free(pvowels[0]);
    free(pvowels[1]);

    // トップレベルのポインタを解放する
    free(pvowels);


演習
----

[パスカルの三角形](http://mathworld.wolfram.com/PascalsTriangle.html)の最初の7行を以下に示します。行*i*には*i*個の要素が含まれていることに注意してください。したがって、最初の3行の数値を格納するには、1 + 2 + 3 = 6個のメモリスロットが必要になります。

>1
>
>1 1
>
>1 2 1
>
>1 3 3 1
>
>1 4 6 4 1
>
>1 5 10 10 5 1
>
>1 6 15 20 15 6 1

パスカルの三角形の最初の3行の数値を、動的メモリ割り当てを用いて、2次元「配列」に格納するためのスケルトンコードを以下に示す。これらの6つの数値を格納するには、正確に6つのメモリスロットを割り当てる必要があることに注意する。余分なメモリは割り当てない。プログラムの最後に、このプログラムで使用したすべてのメモリブロックを解放する。


チュートリアル コード
-------------------

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int i, j;
        /* TODO: ここで2Dポインタ変数を定義する */

        /* TODO: 3行を保持するためのメモリを割り当てるには、次の行を完成させる */
        pnumbers = (int **) malloc();

        /* TODO: 行内の個々の要素を格納するためのメモリを割り当てる */
        pnumbers[0] = (int *) malloc(1 * sizeof(int));

        pnumbers[0][0] = 1;
        pnumbers[1][0] = 1;
        pnumbers[1][1] = 1;
        pnumbers[2][0] = 1;
        pnumbers[2][1] = 2;
        pnumbers[2][2] = 1;

        for (i = 0; i < 3; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d", pnumbers[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            /* TODO: 各行に割り当てられたメモリを解放する */
        }

        /* TODO: トップレベルのポインタを解放する */

      return 0;
    }

期待している出力
---------------

    1
    11
    121

解答
----

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int i, j;
        /* TODO: 行内の個々の要素を格納するためのメモリを割り当てる */
        int **pnumbers;

        /* TODO: 3行を保持するためのメモリを割り当てるには、次の行を完成させる */
        pnumbers = (int **) malloc(3  *sizeof(int *));

        /* TODO: 行内の個々の要素を格納するためのメモリを割り当てる */
        pnumbers[0] = (int *) malloc(1 * sizeof(int));
        pnumbers[1] = (int *) malloc(2 * sizeof(int));
        pnumbers[2] = (int *) malloc(3 * sizeof(int));

        pnumbers[0][0] = 1;
        pnumbers[1][0] = 1;
        pnumbers[1][1] = 1;
        pnumbers[2][0] = 1;
        pnumbers[2][1] = 2;
        pnumbers[2][2] = 1;

        for (i = 0; i < 3; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d", pnumbers[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            free(pnumbers[i]);
        }

        free(pnumbers);

      return 0;
    }
