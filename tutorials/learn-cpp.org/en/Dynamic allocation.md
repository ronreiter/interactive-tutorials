Tutorial
--------

In C++, memory can be allocated at runtime using the `new` operator. This is known as *dynamic allocation*. It lets you create data structures whose size is not known until the program runs, such as linked lists and trees.

Unlike static allocation (where the compiler decides the size at compile time), `new` requests memory from the heap and returns a pointer to it. Every memory block allocated with `new` must be released with `delete` when it is no longer needed, otherwise your program leaks memory.

Here is a simple example that allocates an integer dynamically:

    int * p = new int;   // allocate one int on the heap
    *p = 42;             // store a value through the pointer
    printf("%d\n", *p);  // read it back
    delete p;            // free the memory

To allocate a whole array dynamically, use `new` with brackets, and release it with `delete[]`:

    int * arr = new int[5];   // array of 5 ints
    arr[0] = 7;
    printf("%d\n", arr[0]);
    delete[] arr;             // note the brackets

The pointer returned by `new` is just like any other pointer: you can dereference it with `*`, access array elements with `[]`, and pass it to functions.

Exercise
--------

Write a program that dynamically allocates an integer, stores the value `5` in it, and prints it on its own line.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* declare a pointer and allocate memory for an int */

      /* store the value 5 through the pointer */

      /* print the value */

      return 0;
    }

Expected Output
---------------

    5

Solution
--------

    #include <stdio.h>

    int main() {
      int * p = new int;   // allocate
      *p = 5;              // store 5
      printf("%d\n", *p);  // print 5
      delete p;            // free
      return 0;
    }
