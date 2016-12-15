Tutorial
--------

In a previous tutorial on [[Arrays]], you learned that arrays are special variables that have contiguous memory allocation and can store multiple values belonging to the same data type. One-dimensional arrays &mdash; the ones that we have seen so far &mdash; can be thought as a list of elements, for example, the list of marks of 10 students and the list of vowels, as shown below.

    int marks[10];
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};

Note that when all the elements of an array are known during its declaration, the array can be initialized using an alternative shorthand notation as shown above. Moreover, in such a scenario, we can skip specifying the size of the array &mdash; the compiler would automatically identify it based on the number of elements it contains.

Two-Dimensional Arrays
----------------------


It is possible to define arrays of higher dimensions as well. For example, a two-dimensional array can be considered analogous to a matrix (or table) with several rows and columns. The following defines a two-dimensional character array consisting of two rows and five columns, i.e., 10 elements altogether.

    char vowels[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };

A few points may be noted here. When declaring a one-dimensional array, we put a single pair of square brackets after the array name, for example, `marks[10]`. In case of two-dimensional arrays, we put two pairs of square braces, for example, `vowels[2][5]`. Similarly, a three-dimensional array would have three such pairs of square braces, for example, `surface[2][3][5]`, and so on. Moreover, as shown above, if a two-dimensional array is initialized during its declaration, we can optionally skip specifying the number of rows. However, the number of columns must be specified.

Address of Array Elements
-------------------------

Until now we have been claiming that arrays have contiguous memory allocation. But how can we verify that?

You know that all variables are stored in memory and therefore, have some memory address. In the following code, let us try to print the addresses of each element of a two-dimensional array.

    char vowels[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };
    int i;
    int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            printf("Address of vowels[%d][%d]: %u\n", i, j, &vowels[i][j]);
        }
        printf("\n");
    }

A typical output of the above code is shown below.

>Address of vowels[0][0]: 4291715782
>
>Address of vowels[0][1]: 4291715783
>
>Address of vowels[0][2]: 4291715784
>
>Address of vowels[0][3]: 4291715785
>
>Address of vowels[0][4]: 4291715786
>
>
>Address of vowels[1][0]: 4291715787
>
>Address of vowels[1][1]: 4291715788
>
>Address of vowels[1][2]: 4291715789
>
>Address of vowels[1][3]: 4291715790
>
>Address of vowels[1][4]: 4291715791

As you would recall, a character occupies one byte of memory. Consequently, the addresses of any two consecutive elements of the above array differ by one. These addresses would change every time you execute the code, but the difference would always be the same. You are suggested to execute this code and convince yourself.

Let us conclude this tutorial with a final observation. In the above code we considered a two-dimensional array. However, based on the memory locations, we find that the elements `vowels[0][4]` (last element of the first row) and `vowels[1][0]` (first element of the second row) are next to each other. You can argue that rather than using the two-dimensional array `vowels[2][5]`, we simply could have used a one-dimensional array `vowels[10]`. From the point of physical memory allocation, these two do not differ. The only advantage we get here is the logical separation in the values stored. For example, in the code considered earlier, we use the first row to store the vowels in upper case and the second row to store them in lower case.

Exercise
--------

Let us try to find out the average marks of a group of five students for two subjects, Physics and Chemistry. To do this, we use a two-dimensional array called `grades`. The marks corresponding to Physics would be stored in the first row (`grades[0]`), whereas those corresponding to Chemistry would be stored in the second row (`grades[1]`). Complete the following steps so that you can execute this program.

* Declare `grades` as a two-dimensional array of integers
* Complete the `for` loops by specifying their terminating conditions
* Compute the average marks obtained in each subject

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        /* TODO: declare the 2D array grades here */
        float average;
        int i;
        int j;

        grades[0][0] = 80;
        grades[0][1] = 70;
        grades[0][2] = 65;
        grades[0][3] = 89;
        grades[0][4] = 90;

        grades[1][0] = 85;
        grades[1][1] = 80;
        grades[1][2] = 80;
        grades[1][3] = 82;
        grades[1][4] = 87;

        /* TODO: complete the for loop with appropriate terminating conditions */
        for (i = 0; i < ; i++) {
            average = 0;
            for (j = 0; j < ; j++) {
                average += grades[i][j];
            }

            /* TODO: compute the average marks for subject i */
            printf("The average marks obtained in subject %d is: %.2f\n", i, average);
        }

        return 0;
    }

Expected Output
---------------

    The average marks obtained in subject 0 is: 78.80
    The average marks obtained in subject 1 is: 82.80

Solution
--------

    int main() {
        int grades[2][5];
        float average;
        int i;
        int j;

        grades[0][0] = 80;
        grades[0][1] = 70;
        grades[0][2] = 65;
        grades[0][3] = 89;
        grades[0][4] = 90;

        grades[1][0] = 85;
        grades[1][1] = 80;
        grades[1][2] = 80;
        grades[1][3] = 82;
        grades[1][4] = 87;

        for (i = 0; i < 2; i++) {
            average = 0;
            for (j = 0; j < 5; j++) {
                average += grades[i][j];
            }

            average /= 5.0;
            printf("The average marks obtained in subject %d is: %.2f\n", i, average);
        }

        return 0;
    }

[arrays]: [[Arrays]]
