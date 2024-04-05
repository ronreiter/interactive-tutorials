//! Attempt the following questions given below:

// TODO : (e) Write a program to find if a square mtrix is symmetric or not.
// #include <stdio.h>
// int main()
// {
//     int n, i, j, flag = 1;
//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);
//     int mat[n][n];
//     printf("Enter the elements of the matrix:\n");
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
// // In the first part of the program, we declare some variables to store the size of the matrix n, loop counters i and j, and a flag flag to keep track of whether the matrix is symmetric or not. We then prompt the user to enter the size of the matrix, and read it in using scanf(). We then declare a 2-dimensional array mat with n rows and n columns to store the matrix elements. Finally, we prompt the user to enter the matrix elements, and read them in using nested loops.

//     for(i = 0; i < n; i++)
//     {
//         for(j = i + 1; j < n; j++)
//         {
//             if(mat[i][j] != mat[j][i])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 0)
//         {
//             break;
//         }
//     }

// // In the second part of the program, we loop over the upper triangular part of the matrix (i.e., the elements above the main diagonal). For each element mat[i][j], we check whether its corresponding element mat[j][i] below the main diagonal is equal to it. If these two elements are not equal, we set the flag variable to 0 and break out of the inner loop. If the flag variable is 0 at any point, we break out of the outer loop as well, since we know that the matrix is not symmetric.

//     if(flag == 1)
//     {
//         printf("The matrix is symmetric.\n");
//     }
//     else
//     {
//         printf("The matrix is not symmetric.\n");
//     }
//     return 0;
// }

// // In the final part of the program, we check the value of the flag variable to determine whether the matrix is symmetric or not. If the flag variable is 1, we print a message to indicate that the matrix is symmetric. Otherwise, we print a message to indicate that the matrix is not symmetric. We then return 0 to indicate successful completion of the program.

// // Overall, this program uses a simple approach to check whether a matrix is symmetric by comparing its upper triangular part with its lower triangular part. The program assumes that the user enters a square matrix of size n x n, and returns an error if the user enters a non-square matrix or a matrix with invalid values.

// TODO : (f) Write a program to add two 6 * 6 matrices.
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     int arr1[6][6], arr2[6][6], result[6][6];
//     printf("Add elements of two 6 * 6 matices.\n");

//     // taking elements of 1st matrix
//     printf("Enter elements of first matrix : \n");
//     for ( i = 0; i < 6; i++)
//     {
//         for(j = 0; j < 6; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     // taking elements of 2nd matrix
//     printf("Enter elements of second matrix : \n");
//     for ( i = 0; i < 6; i++)
//     {
//         for(j = 0; j < 6; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     // adding both matrices
//     for ( i = 0; i < 6; i++)
//     {
//         for( j = 0; j < 6; j++)
//         {
//             result[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }

//     // printing the result of the array
//     for( i = 0; i < 6; i++)
//     {
//         for(j = 0; j < 6; j++)
//         {
//             printf("%d \t", result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// TODO : (g) Write a program to multiply any two 3 * 3 matrices.
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int matrix1[3][3], matrix2[3][3], result[3][3];
//     printf("Multiply any two 3 * 3 matices.\n");

//     // taking input of first matrix
//     printf("Enter elements of first matrix: \n");
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     // taking input of second matrix
//     printf("Enter elements of second matrix: \n");
//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // multiply both matrices and printing the result
//     for( i = 0; i < 3; i++)
//     {
//         for( j = 0; j < 3; j++)
//         {
//             result[i][j] = matrix1[i][j] * matrix2[i][j];
//         }
//     }

//     for(i = 0; i < 3; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             printf("%d \t", result[i][j]);
//         }
//         printf("\n"); // prints the result in real matrix form 
//     }
//     return 0;
// }

// TODO : (h) Given an array p[5], write a function to shift it circularly left by two positions. Thus, if the original array is {15, 30, 28, 19, 61} then after shifting it will be { 28, 19, 61, 15, 30} Call this function for a 4 * 5 matirix and get its rows left shifted.

void shiftArray(int *p, int size)
{
    int temp1 = p[0], temp2 = p[1];
    for (int i = 2; i < size; i++)
    {
        p[i - 2] = p[i];
    }
    p[size - 2] = temp1;
    p[size - 1] = temp2;
}
// This function takes an integer array p and its size size as input parameters. It uses two temporary variables 'temp1' and 'temp2' to store the first two elements of the array. Then, it loops through the remaining elements of the array, shifting them two positions to the left. Finally, it stores temp1 and temp2 at the end of the shifted array.

// To call this function for a 4 * 5 matrix and get its rows left shifted, you can use the following code:

#include <stdio.h>

void shiftArray(int *p, int size);

int main()
{
    int matrix[4][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20}};

    printf("Original matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // shifting each row of the matrix
    for (int i = 0; i < 4; i++)
    {
        shiftArray(matrix[i], 5);
    }

    printf("\nMatrix after circularly shifting each row left by two positions:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// In this code, we first define a 4 * 5 matrix and print its original values. Then, we loop through each row of the matrix and call the shiftArray function to shift each row circularly left by two positions. Finally, we print the resulting matrix with each row shifted.


//! EXAMPLES
//* Write a program to pick up the largest number from a 5 row by 5 column matrix.
// #include<stdio.h>
// int main()
// {
//     int a[5][5] = {
//         {11, 1, 7, 9, 7},
//         {13, 54, 56, 2, 5},
//         {23, 43, 89, 22, 13},
//         {14, 15, 17, 16, 19},
//         {45, 3, 6, 8, 10}
//     };
//     int i, j, big;
//     big = a[0][0];
//     for ( i = 0; i <= 4; i++) //row
//     {
//         for(j = 0; j <= 4; j++) // column
//         {
//             if(a[i][j] > big)
//                 big = a[i][j];
//         }
//     }
//     printf("\nLargest number in the matrix is %d\n", big);
//     return 0;
// }

//* Write a program to obtain transpose of a 3 * 5 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column
// #include<stdio.h>
// int main()
// {
//     int mat1[3][5] = {
//         1, 2, 3, 4, 5,
//         6, 7, 8, 9, 10,
//         11, 12, 13, 14, 15
//     };
//     int mat2[5][3];
//     int i, j;
//     for( i = 0; i < 3; i++)
//     {
//         for( j = 0; j < 5; j++)
//             mat2[j][i] = mat1[i][j];
//     }
//     for ( i = 0; i < 5; i++)
//     {
//         for(j = 0; j < 3; j++)
//             printf("%d\t", mat2[i][j]);
//         printf("\n");
//     }
//     return 0;
// }
