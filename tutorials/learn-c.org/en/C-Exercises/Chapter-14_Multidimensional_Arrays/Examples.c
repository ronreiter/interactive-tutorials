// #include<stdio.h>
// int main()
// {
//     int stud[ 4 ][ 2 ];
//     int i, j;
//     for(i = 0; i <= 3; i++)
//     {
//         printf("Enter roll no. & and the marks: ");
//         scanf("%d%d", &stud[i][0], &stud[i][1]);
//     }
//     for(i = 0; i <= 3; i++)
//     {
//         printf("Marks: %d Roll No.: %d\n", stud[i][0], stud[i][1]);
//     }
//     return 0;
// }

// Pointer notation to access 2-D array elements
// #include<stdio.h>
// int main()
// {
//     int s[ 4 ][ 2 ] = {
//         {1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}
//     };
//     int ( *p )[ 2 ];
//     int i, j, *pint;
//     for( i = 0; i <= 3; i++)
//     {
//         p = &s[i];
//         pint = ( int *) p;
//         printf("\n");
//         for(j = 0; j <= 1; j++)
//             printf("%d", *(pint + j));
//     }
//     return 0;
// }

//* Passing 2-D array to a function
// #include<stdio.h>
// void display( int q[ ][4], int , int);
// int main()
// {
//     int a[ 3 ][ 4 ] = { // 3 rows and 4 column
//         1,2,3,4,
//         5,6,7,8,
//         9,0,1,6
//     };
//     display(a, 3, 4);
//     return 0;
// }
// void display( int q[ ][4], int row, int col)
// {
//     int i, j;
//     for( i = 0; i < row; i++)
//     {
//         for( j = 0; j < col; j++)
//             printf("%d ", q[i][j]);
//             printf("\n");
//     }
//     printf("\n");
// }

// ! Array to pointers
// #include<stdio.h>
// int main()
// {
//     int *arr[4]; // array of integer pointers
//     int i = 31, j = 5, k = 19, l = 71, m;
//     arr[0] = &i;
//     arr[1] = &j;
//     arr[2] = &k;
//     arr[3] = &l;
//     for( m = 0; m <= 3; m++)
//         printf("%d\n", *(arr[m]));
//     return 0;
// }

//* An array pointers can even contain the addresses of other arrays elements. The folling program would justify this: 
// #include<stdio.h>
// int main()
// {
//     static int a[ ] = {5, 1, 2, 3, 4};
//     int *p[ ] = { a, a + 1, a + 2, a + 3, a + 4};
//     printf("%u %u %d\n", p, *p, *( *p));
//     return 0;
// }

// ! 3-D Array 
