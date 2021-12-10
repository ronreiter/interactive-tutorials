Tutorial
--------

数组是一种特殊的变量，它可以在同一个变量名下容纳多个值，并以索引的形式组织起来。
数组的定义采用了非常简单的语法：

    /* 定义了一个由10个整数组成的数组 */
    int numbers[10];

从数组中访问一个数字也是用同样的语法完成的。
请注意，C语言中的数组是以零开头的，这意味着如果定义了一个大小为10的数组，那么数组单元0到9（包括）都被定义了。
`numbers[10]`不存在。

    int numbers[10];

    /* 填充该数组 */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* 打印数组中的第7个数字，其索引为6 */
    printf("The 7th number in the array is %d", numbers[6]);

数组只能有一种类型的变量，因为它们被实现为计算机内存中的一个数值序列。
正因如此，访问一个特定的数组单元是非常高效的。

Exercise
--------

* 下面的代码不能编译，因为缺少`grades`变量。
* 其中一个成绩缺失。你能定义它，使平均成绩为85分吗？

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* TODO：在这里定义成绩变量 */
      int average;

      grades[0] = 80;
      /* TODO：定义缺失的成绩，以使平均分达到85。 */
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("The average of the 3 grades is: %d", average);

      return 0;
    }

Expected Output
---------------

    The average of the 3 grades is: 85

Solution
--------

    #include <stdio.h>

    int main() {
      /* TODO：在这里定义成绩变量 */
      int grades[3];
      int average;

      grades[0] = 80;
      /* TODO：定义缺失的成绩，以使平均分达到85。 */
      grades[1] = 85;
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("The average of the 3 grades is: %d", average);

      return 0;
    }
