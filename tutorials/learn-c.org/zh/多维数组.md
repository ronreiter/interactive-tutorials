Tutorial
--------

在前一节[数组](https://www.learn-c.org/zh/数组)教程中讲解了如何使用数组。这些数组都是一维的，但C语言可以创建和使用多维数组。下面是一个多维数组声明的一般形式。

	type name[size1][size2]...[sizeN];

这里有一个基本示例参考——

	int foo[1][2][3];

也可以这样——

	char vowels[1][5] = {
		{'a', 'e', 'i', 'o', 'u'}
	};

### 二维数组

二维数组是最简单的多维数组。一个二维数组差不多是一个一维数组的列表。要声明一个大小为[ x ][ y ]的二维整数数组，你可以这样写——

	type arrayName [x][y];

其中**type**可以是C语言的任何数据类型（int, char, long, long long, double, 等等），**arrayName**是一个有效的C语言标识符，或变量。一个二维数组可以被认为是一个表，它有[ x ]行和[ y ]列。可以这样想象一个包含三行四列的二维数组a——

![Table 1A](https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg)

像这样，数组a中的每个元素都由**a[i][j]**形式的元素名来识别，其中'a'是数组的名称，'i'和'j'是独一无二的索引，合起来也就是'a'中的一个元素的意思。

其实，不需要把[ x ]值真的放进去，因为如果这样做——

	char vowels[][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};

编译器已经知道有两个 "维度"，但是，**需要**一个[ y ]值！! 编译器很聪明，但是它*不会知道*你在维度中使用了多少个整数、字符、浮点数，或者其他。请牢记这一点。

### 初始化二维数组

多维数组中可以为每一行指定[]内的值。下面是一个3行4列的数组。为了方便，你可以不写3，不填写行数，它仍然可以工作。

	int a[3][4] = {  
	   {0, 1, 2, 3} ,   /*  初始化索引为0的行 */
	   {4, 5, 6, 7} ,   /*  初始化索引为1的行 */
	   {8, 9, 10, 11}   /*  初始化索引为2的行 */
	};

里面的大括号表示想要的行，是可选的。下面的初始化效果与前面的例子相同——

	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

### 访问二维数组中的元素

通过使用下标来访问二维数组中的元素，即使用数组的行索引和列索引。例如——

	int val = a[2][3];

上述语句将从数组中取出第3行第4个元素。

Exercise
--------

尝试找出五名学生数学和物理两门学科的平均分。使用一个名为```grades```的二维数组去完成。数学对应的分数将被存储在第一行（``grades[0]``），物理对应的分数将被存储在第二行（``grades[1]``）。完成以下剩余步骤，执行这个程序。

- 将成绩声明为一个二维整数数组
- 通过指定终止条件来完成for循环
- 计算各科的平均分

Tutorial Code
-------------

	#include <stdio.h>

	int main() {
		/* TODO：在此声明成绩二维数组 */
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

		/* TODO：通过指定终止条件来完成for循环 */
		for (i = 0; i < ; i++) {
			average = 0;
			for (j = 0; j < ; j++) {
				average += grades[i][j];
			}

			/* TODO：计算学科i的平均分 */
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}


Expected Output
---------------

    The average marks obtained in subject 0 is: 78.80
    The average marks obtained in subject 1 is: 82.80

Solution
--------

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
