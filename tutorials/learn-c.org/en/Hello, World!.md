Tutorial
--------

### Introduction

The C programming language is a general purpose programming language, which relates closely to the way machines work. 
Understanding how computer memory works is an important aspect of the C programming language. Although C can be considered
as "hard to learn", C is in fact a very simple language, with very powerful capabilities.

C is a very common language, and it is the language of many applications such as Windows, the Python interpreter, Git, and
many many more. 

C is a compiled language - which means that in order to run it, the compiler (for example, GCC or Visual Studio) must take the code that 
we wrote, process it, and then create an executable file. This file can then be executed, and will do what we intended for the program
to do.

### Our first program

Every C program uses libraries, which give the ability to execute necessary functions. For example, the most basic function
called `printf`, which prints to the screen, is defined in the `stdio.h` header file. 

To add the ability to run the `printf` command to our program, we must add the following include directive to our first line of the code:

    #include <stdio.h>

The second part of the code is the actual code which we are going to write. The first code which will run will always reside 
in the `main` function. 

    int main() {
      ... our code goes here
    }

The `int` keyword indicates that the function `main` will return an integer - a simple number. The number which will be returned
by the function indicates whether the program that we wrote worked correctly. If we want to say that our code
was run successfully, we will return the number 0. A number greater than 0 will mean that the program that we wrote failed.

For this tutorial, we will return 0 to indicate that our program was successful:

    return 0;

Notice that every line in C must end with a semicolon, so that the compiler knows that a new line has started.

Last but not least, we will need to call the function `printf` to print our sentence.

Exercise
--------

Change the program at the bottom so that it prints to the output "Hello, World!". 

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      printf("Goodbye, World!");
      return 0;
    }

Expected Output
---------------

    Hello, World!

Solution
--------

    #include <stdio.h>

    int main() {
      printf("Hello, World!");
      return 0;
    }
