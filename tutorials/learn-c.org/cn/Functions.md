Tutorial
--------

C 的函数很简单, 但是因为C的工作方式, 函数的力量比较有限

* 函数接收固定数量或可变数量的参数
* 函数只能返回一个值，或者不返回任何值

在C语言中, 实参是按值复制到函数中的，我们不能更改实参以影响函数外的实参值。要做到这个，我们必须使用指针，这将在以后说明

函数使用以下的语法进行定义:

    int foo(int bar) {
        /* do something */
        return bar * 2;
    }

    int main() {
        foo(1);
    }

我们定义函数`foo`, 它接受一个参数`bar`, 这个函数接收一个int类型的值, 返回bar * 2的结果

我们使用以下语法进行调用函数foo

    foo(1);

在C语言中，函数在代码中使用之前必须首先定义。它们可以先声明，然后在使用头文件或在C文件的开头实现，也可以按使用顺序实现（不太可取）

正确使用函数的方法如下：

    /* function declaration */
    int foo(int bar);

    int main() {
        /* calling foo from main */
        printf("The value of foo is %d", foo(1));
    }

    int foo(int bar) {
        return bar + 1;
    }

使用`void`关键词创建一个无返回值函数

    void moo() {
        /* do something and don't return a value */
    }

    int main() {
        moo();
    }

Exercise
--------

编写一个名为`print_big`的函数，该函数接收一个整数参数，如果给定给该函数的参数是大于10的数字，则打印`x is big`（其中x是参数）。

* **注意**: 不要忘了在printf中的字符串中添加`\n`

Tutorial Code
-------------

    #include <stdio.h>

    /* function declaration */
    void print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    /* write your function here */

Expected Output
---------------

    11 is big
    22 is big
    33 is big

Solution
--------

    #include <stdio.h>

    /* function declaration */
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

