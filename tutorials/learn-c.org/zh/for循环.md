Tutorial
--------

C语言中的for循环非常简单。你能用它创建一个循环 - 一块运行多次的代码块。
for循环需要一个用来迭代的变量，通常命名为`i`。

for循环能够做这些：

* 用一个初始值初始化迭代器变量
* 检查迭代变量是否达到最终值
* 增加迭代变量的值

如果想运行代码块10次，可以这样写：

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
	
这段代码会打印从0到9的数字。

for循环能够用来获取数组的每一个值。要计算一个数组所有值的和，可以这样使用`i`：

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* 求a[0]到a[9]的和 */
    printf("Sum of the array is %d\n", sum);

Exercise
--------

计算数组array的阶乘（从array[0]乘到array[9]）。


Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;
      int i;

      /* 在这里使用for循环计算阶乘*/

      printf("10! is %d.\n", factorial);
    }

Expected Output
---------------

    10! is 3628800.

Solution
--------

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
