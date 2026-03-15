Tutorial
--------

配列は、同じ変数名で複数の値をインデックスで整理して保持できる特殊な変数です。配列は非常に簡単な構文で定義されます。

    /* 10個の整数の配列を定義する */
    int numbers[10];

配列から数値にアクセスする場合も同じ構文を使用します。C言語の配列は0から始まります。つまり、サイズが10の配列を定義した場合、配列のセル0から9（両端を含む）が定義されます。`numbers[10]` は有効な値を持ちません。

    int numbers[10];

    /* populate the array */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* 配列のインデックスが6である7番目の数値を出力します */
    printf("The 7th number in the array is %d", numbers[6]);

配列はコンピュータのメモリ内で、『値が等間隔に整列したもの』として実装されるため、1種類の変数しか持つことができません。
そのため、特定の配列セルへのアクセスは非常に効率的です。

Exercise
--------

* 以下のコードは `grades` 変数が欠落しているためコンパイルできません。
* 成績の1つが欠落しています。成績平均が85になるように定義できますか？

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* TODO: ここでgrades変数を定義します */
      int average;

      grades[0] = 80;
      /* TODO: 欠落している成績を
      平均が85になるように定義します。 */
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("The average of the 3 grades is: %d", average);

      return 0;
    }

Expected Output
---------------

    The average of the 3 grades is: 85

Solution
----

    #include <stdio.h>

    int main() {
      /* TODO: ここでgrades変数を定義します */
      int grades[3];
      int average;

      grades[0] = 80;
      /* TODO: 欠落している成績を
      平均が85になるように定義します。 */
      grades[1] = 85;
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("The average of the 3 grades is: %d", average);

      return 0;
    }
