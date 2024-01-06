Tutorial
--------
`static` 是C编程语言中的一个关键字。它可以与变量和函数一起使用。

### 什么是静态变量
默认情况下，变量是定义变量的范围的局部变量。变量可以声明为静态变量，以将其范围扩大到包含变量的文件。因此，可以在文件中的任何位置访问这些变量。

考虑以下场景——我们想统计参加比赛的跑步者：

    #include<stdio.h>
    int runner() {
        int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

我们将看到`count`没有更新，因为函数执行结束后，局部变量就会从内存中删除。但是，如果使用`static`关键字：

    #include<stdio.h>
    int runner()
    {
        static int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

### 什么是静态方法
默认情况下，函数在C中是全局的。如果我们用`static`声明一个函数，则该函数的范围将缩小到包含它的文件 (只能在声明它的文件中调用)

语法如下:

    static void fun(void) {
       printf("I am a static function.");
    }

### 静态 vs 全局
静态变量在包含它们的文件上具有作用域，它们只能在给定文件内访问。全局变量可以在文件外访问。

Exercise
--------
在本练习中，尝试使用static关键字来查找一些数字的和。不要将任何表示运行总数的变量传递给`sum`函数。

Tutorial Code
-------------

   #include <stdio.h>
   int sum (int num) {
       /**
       * find sum to n numbers
       */
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

Expected Output
---------------

   55 100 150

Solution
--------

   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

