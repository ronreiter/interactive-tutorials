Tutorial
--------

前回の[配列](https://www.learn-c.org/en/Arrays)のチュートリアルでは、配列とその仕組みについて説明しました。これまで見てきた配列はすべて1次元でしたが、C言語では多次元配列を作成・使用できます。多次元配列の宣言の一般的な形式は次のとおりです。

	type name[size1][size2]...[sizeN];

For example, here's a basic one for you to look at -

基本的な例をここに挙げると…

	int foo[1][2][3];

or maybe this one -

ほかには、こんなのも…

	char vowels[1][5] = {
		{'a', 'e', 'i', 'o', 'u'}
	};

### 二次元配列

多次元配列の最も単純な形式は二次元配列です。二次元配列は、基本的に一次元配列のリストです。サイズが[ x ][ y ]の二次元整数配列を宣言するには、次のように記述します。

	type arrayName [x][y];

ここで、__type__ は任意の C データ型（int、char、long、long long、double など）で、__arrayName__ は有効な C 識別子または変数です。2 次元配列は、[ x ] 行と [ y ] 列を持つ表と考えることができます。3 行 4 列の 2 次元配列 a は、次のように表すことができます。

![Table 1A](https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg)

配列 a 内のすべての要素は、__a[i][j]__ という形式の要素名によって識別されます。ここで、'a' は配列の名前であり、'i' と 'j' は 'a' 内の各要素を一意に識別または表示するインデックスです。

実際には、[x]の値を入力する必要はありません。なぜなら、次のようにすれば、

	char vowels[][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};

それだけで、コンパイラは2つの「次元」があることを認識しています。が、それでも[ y ] 値は必須です。コンパイラは賢いかもしれませんが、その次元に整数、文字、浮動小数点数などが何個あるかは*認識*できません。この点にご注意ください。

### 二次元配列の初期化

多次元配列は、各行に括弧[]で囲まれた値を指定することで使用できます。下の配列は3行で、各行に4列あります。楽がしたいなら、3を省略して空白のままにしても問題ありません。

	int a[3][4] = {  
	   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
	   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
	   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
	};

必要な行を示す内側の括弧は、オプションです。なくてもかまいませんん。したがって、以下の初期化は、上の例と同じです。

	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

### 二次元配列の要素にアクセスする

二次元配列の要素には、添字、つまり配列の行インデックスと列インデックスを使ってアクセスします。例えば、

	int val = a[2][3];

というステートメントは、配列の 3 行目で 4 列目の要素を取得します。

Exercise
--------

数学と物理の2つの科目について、5人の生徒グループの平均点を調べてみましょう。そのためには、「grades」という2次元配列を使用します。数学の点数は1行目（「grades[0]」）に格納され、物理の点数は2行目（「grades[1]」）に格納されます。このプログラムを実行するには、以下の手順を実行してください。

- 成績を整数の2次元配列として宣言する
- 終了条件を指定してforループを完了する
- 各科目の平均点を計算する

Tutorial Code
-------------

	#include <stdio.h>

	int main() {
		/* TODO: ここで2次元配列の grades を宣言します */
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		/* TODO: 適切な終了条件で for ループを完了する */
		for (i = 0; i < ; i++) {
			average = 0;
			for (j = 0; j < ; j++) {
				average += grades[i][j];
			}

			/* TODO: 科目 i の平均点を計算する */
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}


Expected Output
---------------

    The average marks obtained in subject 0 is: 78.80
    The average marks obtained in subject 1 is: 82.80

Solution
----

	#include <stdio.h>

	int main() {
		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}
