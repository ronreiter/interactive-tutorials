Tutorial
--------

A function that calls itself is called a *recursive* function. Recursion is a powerful technique for solving problems that can be broken down into smaller versions of the same problem, such as traversing trees, computing factorials, or searching directories.

A recursive function always needs a *base case* — a condition under which it stops and returns a result without recursing further. Without a base case, the function would keep calling itself forever (until the program runs out of stack space).

Here is a classic example: computing the factorial of a number. The factorial of `n` is `n * (n-1) * ... * 1`, and `0!` is defined as `1`.

    int factorial(int n) {
        if (n == 0) {          // base case
            return 1;
        }
        return n * factorial(n - 1);  // recursive step
    }

Let's trace what happens when we call `factorial(3)`. It computes `3 * factorial(2)`, which computes `2 * factorial(1)`, which computes `1 * factorial(0)`, which returns `1`. Then the results unwind: `1 * 1 = 1`, `2 * 1 = 2`, `3 * 2 = 6`.

Exercise
--------

Write a recursive function called `sum_to` that returns the sum of all integers from `1` up to `n` (so `sum_to(3)` should return `1 + 2 + 3 = 6`).

Tutorial Code
-------------

    #include <stdio.h>

    /* write the recursive function sum_to here */

    int main() {
      printf("%d\n", sum_to(3));
      printf("%d\n", sum_to(10));
      return 0;
    }

Expected Output
---------------

    6
    55

Solution
--------

    #include <stdio.h>

    int sum_to(int n) {
        if (n == 1) {          // base case
            return 1;
        }
        return n + sum_to(n - 1);
    }

    int main() {
      printf("%d\n", sum_to(3));
      printf("%d\n", sum_to(10));
      return 0;
    }
