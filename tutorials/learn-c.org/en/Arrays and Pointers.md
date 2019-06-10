Tutorial
--------

In a previous tutorial on [[Pointers]], you learned that a pointer to a given data type can store the address of any variable of that particular data type. For example, in the following code, the pointer variable `pc` stores the address of the character variable `c`.

    char c = 'A';
    char *pc = &c;

Here, `c` is a scalar variable that can store only a single value. However, you are already familiar with arrays that can hold multiple values of the same data type in a contiguously allocated memory block. So, you might wonder, can we have pointers to arrays too? Indeed, we can.

Let us start with an example code and look at its output. We will discuss its behavior subsequently.

    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = &vowels;
    int i;

    // Print the addresses
    for (i = 0; i < 5; i++) {
        printf("&vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // Print the values
    for (i = 0; i < 5; i++) {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

A typical output of the above code is shown below.

>&vowels[0]: 4287605531, pvowels + 0: 4287605531, vowels + 0: 4287605531
>
>&vowels[1]: 4287605532, pvowels + 1: 4287605532, vowels + 1: 4287605532
>
>&vowels[2]: 4287605533, pvowels + 2: 4287605533, vowels + 2: 4287605533
>
>&vowels[3]: 4287605534, pvowels + 3: 4287605534, vowels + 3: 4287605534
>
>&vowels[4]: 4287605535, pvowels + 4: 4287605535, vowels + 4: 4287605535
>
>vowels[0]: A, \*(pvowels + 0): A, *(vowels + 0): A
>
>vowels[1]: E, \*(pvowels + 1): E, *(vowels + 1): E
>
>vowels[2]: I, \*(pvowels + 2): I, *(vowels + 2): I
>
>vowels[3]: O, \*(pvowels + 3): O, *(vowels + 3): O
>
>vowels[4]: U, \*(pvowels + 4): U, *(vowels + 4): U



As you rightly guessed, `&vowels[i]` gives the memory location of the *i*th element of the array `vowels`. Moreover, since this is a character array, each element occupies one byte so that the consecutive memory addresses are separated by a single byte. We also created a pointer, `pvowels`, and assigned the address of the array `vowels` to it. `pvowels + i` is a valid operation; although in general, this may not always be meaningful (explored further in [[Pointer Arithmetics]] ). In particular, the output shown above indicates that `&vowels[i]` and `pvowels + i` are equivalent. Feel free to alter the data types of the array and pointer variables to test this out.

If you look carefully at the previous code, you will notice that we also used another apparently surprising notation: `vowels + i`. Moreover, `pvowels + i` and `vowels + i` returns the same thing &mdash; address of the *i*th element of the array `vowels`. On the other hand, `*(pvowels + i)` and `*(vowels + i)` both return the *i*th element of the array `vowels`. Why is that so?

This is because the name of an array itself is a (constant) pointer to the first element of the array. In other words, the notations `vowels`, `&vowels[0]`, and `vowels + 0` all point to the same location.


Dynamic Memory Allocation for Arrays
------------------------------------

By now we know that we can traverse an array using pointers. Moreover, we also know that we can dynamically allocate (contiguous) memory using blocks pointers. These two aspects can be combined to dynamically allocate memory for an array. This is illustrated in the following code.

    // Allocate memory to store five characters
    int n = 5;
    char *pvowels = (char *) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    *(pvowels + 2) = 'I';
    pvowels[3] = 'O';
    *(pvowels + 4) = 'U';

    for (i = 0; i < n; i++) {
        printf("%c ", pvowels[i]);
    }

    printf("\n");

    free(pvowels);

In the above code, we allocated five contiguous bytes of memory to store five characters. Subsequently, we used array notations to traverse the blocks of memory as if `pvowels` is an array. However, remember that `pvowels` actually is a pointer. Pointers and arrays, in general, are not the same thing.

So when is this useful? Remember that while declaring an array, the number of elements that it would contain must be known beforehand. Therefore, in some scenarios it might happen that the space allocated for an array is either too less than the desired space or too much more. However, by using dynamic memory allocation, one can allocate just as much memory as required by a program. Moreover, unused memory can be freed as soon as it is no longer required by invoking the `free()` function. On the down side, with dynamic memory allocation, one must responsibly call `free()` wherever relevant. Otherwise, memory leaks would occur.

We conclude this tutorial by looking at dynamic memory allocation for a two-dimensional array. This can be generalized to *n*-dimensions in a similar way. Unlike one-dimensional arrays, where we used a pointer, in this case we require a pointer to a pointer, as shown below.

    int nrows = 2;
    int ncols = 5;
    int i, j;

    // Allocate memory for nrows pointers
    char **pvowels = (char **) malloc(nrows * sizeof(char *));

    // For each row, allocate memory for ncols elements
    pvowels[0] = (char *) malloc(ncols * sizeof(char));
    pvowels[1] = (char *) malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++) {
        for(j = 0; j < ncols; j++) {
            printf("%c ", pvowels[i][j]);
        }

        printf("\n");
    }

    // Free individual rows
    free(pvowels[0]);
    free(pvowels[1]);

    // Free the top-level pointer
    free(pvowels);


Exercise
--------

The first seven rows of [Pascal's triangle](http://mathworld.wolfram.com/PascalsTriangle.html) are shown below. Note that row *i* contains *i* elements. Therefore, to store the numbers from the first three rows, one would require 1 + 2 + 3 = 6 memory slots.

>1
>
>1 1
>
>1 2 1
>
>1 3 3 1
>
>1 4 6 4 1
>
>1 5 10 10 5 1
>
>1 6 15 20 15 6 1

Complete the skeleton code given below to store the numbers from the first three rows of Pascal's triangle in a two-dimensional &quot;array&quot; using dynamic memory allocation. Note that you must allocate exactly six memory slots to store those six numbers. No extra memory should be allocated. At the end of your program, free all the memory blocks used in this program.


Tutorial Code
-------------

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int i, j;
        /* TODO: define the 2D pointer variable here */

        /* TODO: complete the following line to allocate memory for holding three rows */
        pnumbers = (int **) malloc();

        /* TODO: allocate memory for storing the individual elements in a row */
        pnumbers[0] = (int *) malloc(1 * sizeof(int));

        pnumbers[0][0] = 1;
        pnumbers[1][0] = 1;
        pnumbers[1][1] = 1;
        pnumbers[2][0] = 1;
        pnumbers[2][1] = 2;
        pnumbers[2][2] = 1;

        for (i = 0; i < 3; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d", pnumbers[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            /* TODO: free memory allocated for each row */
        }

        /* TODO: free the top-level pointer */

      return 0;
    }

Expected Output
---------------

    1
    11
    121

Solution
--------

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int i, j;
        /* TODO: define the 2D pointer variable here */
        int **pnumbers;

        /* TODO: Complete the following line to allocate memory for holding three rows */
        pnumbers = (int **) malloc(3  *sizeof(int *));

        /* TODO: Allocate memory for storing the individual elements in a row */
        pnumbers[0] = (int *) malloc(1 * sizeof(int));
        pnumbers[1] = (int *) malloc(2 * sizeof(int));
        pnumbers[2] = (int *) malloc(3 * sizeof(int));

        pnumbers[0][0] = 1;
        pnumbers[1][0] = 1;
        pnumbers[1][1] = 1;
        pnumbers[2][0] = 1;
        pnumbers[2][1] = 2;
        pnumbers[2][2] = 1;

        for (i = 0; i < 3; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d", pnumbers[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            free(pnumbers[i]);
        }

        free(pnumbers);

      return 0;
    }
