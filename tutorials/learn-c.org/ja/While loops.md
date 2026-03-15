Tutorial
--------

whileループはforループに似ていますが、機能は少なくなっています。whileループは、while内の条件が真である限り、whileブロックの実行を継続します。例えば、次のコードはちょうど10回実行されます。

    int n = 0;
    while (n < 10) {
        n++;
    }

常に true (ゼロ以外) と評価される条件が指定されている場合、while ループは無限に実行することもできます。

    while (1) {
       /* do something */
    }

### ループ命令文

C言語には、あらゆるループタイプで併用される重要なループ命令文が2つあります。それは`break` 命令文と`continue` 命令文です。

下の「break」命令文は、whileループが終了しない場合でも、ループを10回実行した後に停止します。

    int n = 0;
    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

次のコードでは、`continue` 命令文によって `printf` コマンドがスキップされ、偶数のみが出力されます。

    int n = 0;
    while (n < 10) {
        n++;

        /* nが奇数であることを確認する */
        if (n % 2 == 1) {
            /* whileブロックの先頭に戻る */
            continue;
        }

        /* nが偶数の場合にのみこのコードに到達する */
        printf("The number %d is even.\n", n);
    }

Exercise
--------

`array` 変数は 10 個の数値のシーケンスで構成されています。while ループ内に 2 つの `if` 条件を記述する必要があります。
これらの条件は、ループの流れを以下のように変更します（`printf` コマンドは変更しません）。

* 現在出力しようとしている数値が 5 未満の場合、出力しません。
* 現在出力しようとしている数値が 10 より大きい場合、出力せずにループを停止します。

反復変数 `i` を進めずに `continue` 導関数を使用しないと、無限ループに陥ることに注意してください。

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            /* ここにコードを記述します */

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }

Expected Output
---------------

    7
    5
    9
    5

Solution
----

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            if(array[i] < 5){
                i++;
                continue;
            }

            if(array[i] > 10){
                break;
            }

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }
