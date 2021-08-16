Tutorial
--------

### 决策

生活中我们必须做出决定。要根据自己的需要来做出决定，程序也是如此。

下面是C语言中决策结构的一般形式。


    int target = 10;
    if (target == 10) {
        printf("Target is equal to 10");
    }


### `if`语句

`if`语句检查一个表达式是`真`还是`假`，并根据结果执行不同的代码。

使用了`==`运算符判断两个变量是否相等，就像上面的例子一样。

也可以用不等式运算符来判断。例如——

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    }

    if (foo > bar) {
        printf("foo is greater than bar.");
    }

使用`else`关键字在表达式为`false`时退出代码。

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else {
        printf("foo is greater than bar.");
    }

有两个以上的结果可供选择的情况下，可以将多个`if` `else`语句`连锁`。

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else if (foo == bar) {
        printf("foo is equal to bar.");
    } else {
        printf("foo is greater than bar.");
    }

也可以嵌套`if` `else`语句。

    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        }
        else {
            printf("Alright, just one more peanut.\n");
        }
    }


两个或多个表达式可以使用逻辑运算符检查是否都为`真`，或是否其中一个为`真`。使用AND运算符`&&`检查两个表达式是否都为`真`。使用OR运算符`||`检查是否至少有一个表达式为`真`。

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

NOT运算符`!`类似：

    int target = 9;
    if (target != 10) {
        printf("Target is not equal to 10");
    }


Exercise
--------

练习，在`guessNumber`函数中构建一个`if`语句，检查数字`guess`是否等于555。如果是，在该函数内用`printf`打印出 "正确。你猜对了！"。如果`guess`小于555，用`printf`打印出 "你猜的低了"。如果`guess`大于555，用`printf`打印出 "你猜的高了"。

* **重要**：不要忘记在要打印的字符串末尾添加一个换行符`\n`。

Tutorial Code
-------------

    #include <stdio.h>

    void guessNumber(int guess) {
        // TODO：在这里写代码
    }

    int main() {
        guessNumber(500);
        guessNumber(600);
        guessNumber(555);
    }

Expected Output
---------------

Your guess is too low.
Your guess is too high.
Correct. You guessed it!

Solution
--------

    #include <stdio.h>

    void guessNumber(int guess) {
        // TODO：在这里写代码
        if (guess < 555) {
            printf("Your guess is too low.\n");
        } else if (guess > 555) {
            printf("Your guess is too high.\n");
        } else {
            printf("Correct. You guessed it!\n");
        }
    }

    int main() {
        guessNumber(500);
        guessNumber(600);
        guessNumber(555);
    }
