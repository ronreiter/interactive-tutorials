Tutorial
--------

C言語のforループはシンプルです。ループとは、複数回実行されるコードブロックのことです。
forループには、通常「i」と表記されるイテレータ変数が必要です。

forループには以下の機能があります。

* 初期値を使用してイテレータ変数を初期化する
* イテレータが最終値に達したかどうかを確認する
* イテレータの値を増やす

例えば、あるブロックを10回繰り返し処理したい場合は、次のように記述します。

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

This block will print the numbers 0 through 9 (10 numbers in total).

For loops can iterate on array values. For example, if we would want to sum all the values of an array, we would use
the iterator `i` as the array index:

このブロックは0から9までの数字（合計10個）を出力します。

forループは配列の値を、繰り返し処理できます。例えば、配列のすべての値を合計したい場合は、
イテレータ「i」を配列のインデックスとして使用します。

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* 合計には a[0] + a[1] + ... + a[9] が含まれます */
    printf("Sum of the array is %d\n", sum);

Exercise
--------

変数 `array` の階乗（`array[0]` から `array[9]` までのすべての項目の乗算）を計算します。

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;
      int i;

      /* ここでforループを使用して階乗を計算します*/

      printf("10! is %d.\n", factorial);
    }

Expected Output
---------------

    10! is 3628800.

Solution
----

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;

      int i;

      for(i=0;i<10;i++){
        factorial *= array[i];
      }

      printf("10! is %d.\n", factorial);
    }
