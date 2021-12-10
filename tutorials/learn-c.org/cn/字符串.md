Tutorial
--------

### 字符串的定义

C语言中的字符串实际上是字符数组。尽管使用指针是C语言中的高级课题，后面会详细解释，先使用指向字符数组的指针来定义简单的字符串，方法如下：

    char * name = "John Smith";

这个方法创建了一个只能读取的字符串。
如果希望定义一个可以被操作的字符串，需要定义为一个字符数组。

    char name[] = "John Smith";

符号不同是因为它分配了一个数组变量，所以可以对它进行操作。方括号`[]`告诉编译器自动计算数组的大小。实际上是否指明大小都是一样的，字符串的长度为字符数组的大小减一。 

    char name[] = "John Smith";
    /* 与下面的意思相同 */
    char name[11] = "John Smith";

尽管字符串`John Smith`正好是10个字符长，但需要加一，是为了表明字符串的结束。一个特殊的char（等于0）表示字符串的结束。字符串的结尾被标记出来是因为程序不知道字符串的长度——只有编译器根据代码才知道。

### 用printf格式化字符串

可以使用`printf`方法将一个字符串与其他字符串一起格式化，具体方法如下：

    char * name = "John Smith";
    int age = 27;

    /* 打印'John Smith is 27 years old.' */
    printf("%s is %d years old.\n", name, age);

请注意，在打印字符串时，必须添加一个换行符（`\n`）来让下一个`printf`语句打印在一个新行中。

### 字符串长度

函数`strlen`返回作为参数传递的字符串的长度。

    char * name = "Nikhil";
    printf("%d\n",strlen(name));        

### 比较字符串

函数`strncmp`对两个字符串进行比较。如果相同，返回数字0；如果不同，返回其他数字。
参数是要比较的两个字符串，以及最大比较长度。这个函数还有一个不安全的版本，叫做`strcmp`，不建议使用。例如：

    char * name = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

### 字符串拼接

函数`strncat`将src字符串的前n个字符添加到目标字符串中，其中n为min(n,length(src))。
传递的参数是目标字符串、源字符串和n——要增添的最大字符数。例如：

    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

Exercise
--------

使用指针定义字符串`first_name`，其值为`John`，使用字符数组定义字符串`last_name`，其值为`Doe`。

Tutorial Code
-------------

    #include <stdio.h>
    #include <string.h>
    int main() {
      /* 定义first_name */
      /* 定义last_name */
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Done!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }


Expected Output
---------------

    Done!
    JohnBoe

Solution
--------

    #include <stdio.h>
    #include <string.h>
    int main() {
      char * first_name = "John";
      char last_name[] = "Doe";
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Done!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }
