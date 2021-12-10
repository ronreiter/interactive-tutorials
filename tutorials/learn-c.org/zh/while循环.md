Tutorial
--------

`while`循环与`for循环`相似，但是功能更少。只要给定条件为`true`，`while`语句就会重复执行。如下代码，`while`会执行10次：

    int n = 0;
    while (n < 10) {
        n++;
    }

如果给定条件一直为`true`，`while`将无限重复执行（非0为`true`）：

    while (1) {
       /* do something */
    }

### 关键字

在C语言中循环语句有两个重要的关键字 - `break` 和 `continue`。

即使`while`给定条件一直为`true`，但在循环第10次时遇到`break`，循环被终止：

    int n = 0;
    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

如下代码所示，`printf`打印输出被`continue`跳过了，只有当`n`为偶数时才会打印：

    int n = 0;
    while (n < 10) {
        n++;

        /* 检查 n 为奇数 */
        if (n % 2 == 1) {
            /* 回到循环体起始位置开始执行*/
            continue;
        }

        /* 只有 n 为偶数时才会执行到这里*/
        printf("The number %d is even.\n", n);
    }

Exercise
--------

`array`变量储存了10个数。在`while`中你必须写两个`if`语句来改变代码的执行顺序（不要修改`printf`语句）：

* 如果`array[i]`小于5，不打印。
* 如果`array[i]`大于10，不打印，且停止循环。

注意如果用`continue`跳过了`i`的自增会导致死循环。

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            /* your code goes here */

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
--------

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
