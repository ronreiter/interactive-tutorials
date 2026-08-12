Tutorial
--------

Just like you can point to a variable with a pointer, you can also point to a function. A *function pointer* stores the address of a function, letting you call that function through the pointer. This is very useful for passing a function as an argument to another function, such as a sort function that accepts a custom comparison, or a `map`-style helper that applies a function to every element.

The syntax is `return_type (*name)(parameters)`. For example, a pointer to a function that takes two `int`s and returns an `int` looks like:

    int (*operation)(int, int);

You can assign a matching function to it, and call it just like a normal function:

    int add(int a, int b) {
        return a + b;
    }

    int (*operation)(int, int);
    operation = add;               // point to add
    printf("%d\n", operation(3, 4));   // call through the pointer

Function pointers are especially handy with arrays. An *array of function pointers* lets you select behaviour by an index:

    int (*operations[2])(int, int);
    operations[0] = add;
    printf("%d\n", operations[0](2, 5));

Exercise
--------

Write a function `apply` that takes two integers and a function pointer `op` to a function that maps two `int`s to one `int`, calls `op` on the two integers, and returns the result. Then use it to compute `3 + 4` with `add`.

Tutorial Code
-------------

    #include <stdio.h>

    int add(int a, int b) {
      return a + b;
    }

    /* write the apply function here */

    int main() {
      printf("%d\n", apply(3, 4, add));
      return 0;
    }

Expected Output
---------------

    7

Solution
--------

    #include <stdio.h>

    int add(int a, int b) {
      return a + b;
    }

    int apply(int a, int b, int (*op)(int, int)) {
      return op(a, b);
    }

    int main() {
      printf("%d\n", apply(3, 4, add));
      return 0;
    }
