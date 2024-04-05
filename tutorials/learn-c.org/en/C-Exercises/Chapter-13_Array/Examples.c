// A Simple program using Array
// #include<stdio.h>
// int main()
// {
//     int avg, sum = 0;
//     int i;
//      int marks[30]; /* arrray declaration*/
//      for ( i = 0; i <= 29; i++)
//      {
//         printf("Enter marks: ");
//         scanf("%d", &marks[i]); /* stores data in array*/
//      }

//      for ( i = 0; i <= 29; i++)
//         sum = sum + marks[i]; /* read data from an array */

//     avg = sum / 30;
//     printf("Average marks = %d\n", avg);
//     return 0;
// }

// Passing array elements to a function
/* Demonstration of call by value & call by reference */
// #include<stdio.h>
// void display1 (int );
// void display2 (int *);
// int main()
// {
//     int i;
//     int marks[] =  { 55, 65, 75, 56, 78, 78, 90 };
//     for ( i = 0; i <= 6; i++)
//         display1 (marks[i]);

//     for( i = 0; i <= 6; i++)
//         display2(&marks[i]);
//     return 0;
// }
// void display1 (int m)
// {
//     printf("%d", m);
// }
// void display2 (int *n)
// {
//     printf("%d", n);
// }

// Pointers and Array
/* some pointer arithmetic */
// #include<stdio.h>
// int main()
// {
//     int i = 3, *x;
//     float j = 1.5, *y;
//     char k = 'c', *z;
//     printf("Value of i = %d\n", i);
//     printf("Value of j = %f\n", j);
//     printf("Value of k = %c\n", k);

//     x = &i; y = &j; z = &k;
//     printf("Original value of i = %u\n", x);
//     printf("Original value of j = %u\n", y);
//     printf("Original value of k = %u\n", z);

//     x++; y++; z++; /* increments the value of x, y, z address */
//     printf("New address in x = %u\n", x);
//     printf("New address in y = %u\n", y);
//     printf("New address in z = %u\n", z);
//     return 0;
// }

//* Pointers and Array, using pointers
// #include<stdio.h>
// int main()
// {
//     int arr[] = {10, 20, 30, 45, 67, 56, 74};
//     int i = 4,  *j, *k, *x, *y;
//     j = &i;
//     j = j + 9; /* pointer plus number */
//     k = &i;
//     k = k - 3; /* pointer minus number */
//     x = &arr[1];
//     y = &arr[5];
//     printf("%d\n", y - x);
//     j = &arr[4];
//     k = (arr + 4);
//     if ( j == k)
//         printf("The two pointer points to the same location\n");
//     else 
//         printf("The two pointers points to different locations\n");

//     return 0;
// }

//* Accessing array elements using pointers
// #include<stdio.h>
// int main()
// {
//     int num[] = { 24, 34, 12, 44, 56, 17};
//     int i, *ptr;
//     ptr = &num[0]; /* Assign address of zeroth element */
//     for ( i = 0; i <= 5; i++)
//     {
//         /* code */
//         printf("address = %u element = %d\n", ptr, *ptr);
//         ptr++; /* increment pointers to point to next integer, if we don't increment the ptr it will print on;y first element 6 times incrementing the ptr will result in printing all the element */ 
//     }
//      return 0;
// }

//* Passing array to a function
// Demonstration of passing an array to a function
// #include<stdio.h>
// void display1(int *, int);
// void display2(int [], int);
// int main()
// {
//     int num[] = {24, 34, 12, 44, 56, 17};
//     display1 (&num[0], 6);
//     display2 (&num[0], 6);
//     return 0;
// }
// void display1 (int *ptr, int n)
// {
//     int i;
//     for(i = 0; i <= n - 1; i++)
//     {
//         printf("element = %d\n", *ptr);
//         ptr++; /* increment pointer to point to next element */
//     }
// }
// void display2 (int ptr[], int n)
// {
//     int i;
//     for(i = 0; i <= n - 1; i++ )
//         printf("element = %d\n", ptr[i]);
// }

//* Accessing array elements in different ways
// #include<stdio.h>
// int main()
// {
//     int num[] = {24, 34, 12, 44, 56, 17};
//     int i;
//     for ( i = 0; i <= 5; i++)
//     {
//         printf("address = %u ", &num[i]);
//         printf("element = %d %d ", num[i], *(num + i));
//         printf("%d %d \n", *(i + num), i[ num ]);
//     }
//     return 0;
// }

//* Felxible array size
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int max, i, *p;
//     printf("Enter array size: ");
//     scanf("%d", &max);
//     p = (int *) malloc(max * sizeof(int));
//     for(i = 0; i <= 5; i++)
//     {
//         p[i] = i * i;
//         printf(" %d \n", p[i]);
//     }
//     return 0;
// }

//* Returning an array
// #include<stdio.h>
// int *fun(int *num );
// int main()
// {
//     int max, *p, i;
//     p = fun (&max);
//     for(i = 0; i < max; i++)
//         printf("%d", p[i]);
//     return 0;
// }
// int *fun(int *num)
// {
//     static int arr[] = {10, 20, 30, 40, 50};
//     *num = sizeof(arr) / sizeof(arr[0]);
//     return arr;
// }