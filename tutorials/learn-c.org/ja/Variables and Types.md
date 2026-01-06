Tutorial
--------

### データ型

C言語にはいろいろな変数型がありますが、基本的な型はほんの少しです。

* 整数 - 正または負の値をとる整数。`char`、`int`、`short`、`long`、`long long` のいずれかで定義されます。
* 符号なし整数 - 正の値しかとれない整数。`unsigned char`、`unsigned int`、`unsigned short`、`unsigned long`、`unsigned long long` のいずれかで定義されます。
* 浮動小数点数 - 実数（小数部を含む数）。`float` と `double` のいずれかで定義されます。
* 構造体 - 後述の「構造体」セクションで説明します。

変数の型によって、その境界が定義されます。 `char` 型の範囲は -128 から 127 までですが、`long` 型の範囲は -2,147,483,648 から 2,147,483,647 までです（`long` 型やその他の数値データ型は、コンピュータによって範囲が異なる場合があります。例えば、64 ビットコンピュータでは -9,223,372,036,854,775,808 から 9,223,372,036,854,775,807 までです）。

C にはブール型が存在しないことに注意してください。通常、ブール型は以下の表記法で定義されます。

    #define BOOL char
    #define FALSE 0
    #define TRUE 1

C では文字の配列を使用して文字列を定義します。これについては文字列のセクションで説明します。

### 変数を定義する

数値の場合、通常は `int` 型を使用します。今日のほとんどのコンピュータでは、これは 32 ビット数値であり、数値の範囲は -2,147,483,648 から 2,147,483,647 です。

変数 `foo` と `bar` を定義するには、次の構文を使用する必要があります。

    int foo;
    int bar = 1;

変数「foo」は使用できますが、初期化していないため、その内容を知ることはできません。変数「bar」には数値「1」が格納されています。

さて、計算してみましょう。「a」、「b」、「c」、「d」、「e」を変数と仮定すると、以下の記法で加算、減算、乗算演算子を使用し、
「a」に新しい値を代入します。

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* 1-2+3*4 = 11 が出力されます */

Exercise
--------

次の演習では、数値 `a`、`b`、`c` の合計を出力するプログラムを作成する必要があります。

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      /* Your code goes here */

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }

Expected Output
---------------
    The sum of a, b, and c is 12.750000.

Solution
----
    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      sum = a + b + c;

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }
