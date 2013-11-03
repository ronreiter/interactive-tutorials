Recursion
---------
 
Tutorial
--------
 
Recursion occurs when a function contains within it a call to itself. Recursion can result in very neat, elegant code that is intuitive to follow. It can also result in a very large amount of memory being used if the recursion gets too deep.
 
Common examples of where recursion is used :
 
* Walking recursive data structures such as linked lists, binary tres, etc.
* Exploring possible scenarios in games such as chess
 
Recursion always consists of two main parts. A terminating case that indicates when the recursion will finish and a call to itself that must make progress towards the terminating case.
 
For example, this function will perform multiplication by recursively adding :
 
    unsigned int multiply(unsigned int x, unsigned int y)
    {
        if (x == 1)
        {
            /* Terminating case */
            return y;
        }
        else if (x > 1)
        {
            /* Recursive step */
            return y + multiply(x-1, y);
        }
 
        /* Catch scenario when x is zero */
        return 0;
    }
 
 
### Exercise
 
Define a new function that will computer the factorial function (5! = 5x4x3x2x1).
 
Tutorial Code
-------------
 
    #include <stdio.h>
    
    int main() {
      /* testing code */
      printf("1! = %i", factorial(1));
      printf("3! = %i", factorial(3));
      printf("5! = %i", factorial(5));
    }
 
Expected Output
---------------
        1! = 1
        3! = 6
        5! = 120