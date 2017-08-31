Tutorial
--------

### Introduction

C++ (pronounced see plus plus) is a general purpose programming language that is free-form and compiled. It is regarded as an intermediate-level language, as it comprises both high-level and low-level language features. It provides imperative, object-oriented and generic programming features.

C++ is one of the most popular programming languages and is implemented on a wide variety of hardware and operating system platforms. As an efficient performance driven programming language it is used in systems software, application software, device drivers, embedded software, high-performance server and client applications, and entertainment software such as video games. Various entities provide both open source and proprietary C++ compiler software, including the FSF, LLVM, Microsoft and Intel.

### Our first program

Every C++ program uses libraries, which give the ability to execute necessary functions. For example, the most basic function
called 'cout', which prints to the screen, is defined in the `iostream` header file. 

To add the ability to run the `cout` command to our program, we must add following include directive to our first line of the code:

    #include <iostream>
    using namespace std;

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

Notice that every line in C++ must end with a semicolon, so that the compiler knows that a new line has started.

Last but not least, we will need to use redirection to the `cout` stream to print our sentence.

Exercise
--------

Change the program in the bottom in a way so that it prints to the output "Hello, world!". 

Tutorial Code
-------------

    #include <iostream>
    using namespace std;

    int main() {
      cout << "Goodbye, World!" << std::endl;
      return 0;
    }

Expected Output
---------------

    Hello, World!

Solution
--------

    #include <iostream>
    using namespace std;

    int main() {
      cout << "Hello, World!" << std::endl;
      return 0;
    }
