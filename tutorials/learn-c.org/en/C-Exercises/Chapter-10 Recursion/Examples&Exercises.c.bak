//* Ex-1 Factorial of a number

// #include<stdio.h>
// int fact_rec(int);
// int main()
// {
//     int a , fact;
//     printf("Enter any number: ");
//     scanf("%d", &a);
//     fact = fact_rec(a);
//     printf("Factorial value : %d", fact);
//     return 0;
// }
// int fact_rec(int x)
// {
//     int f;
//     if( x == 1) // factorial of 1 is 1
//         return (1);
//     else
//         f = x * fact_rec( x - 1);
//     return(f);
// }

//* Five digit positive number is entered through the keyboard, write a recursive function to calculate sum of digits of the 5-digit number.
// #include<stdio.h>
// int rsum(int );
// int main()
// {
//     int sum, num;
//     int n;
//     printf("Enter a five digit number: ");
//     scanf("%d", &num);

//     sum = rsum(num);
//     printf("Sum of digits is %d\n", sum);
//     return 0;
// }

// int rsum(int n)
// {
//     int s, remainder;
//     if (n != 0)
//     {
//         remainder = n % 10;
//         s = remainder + rsum (n / 10);
//     }
//     else
//         return 0;
//     return (s);
// }

//* A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
// #include<stdio.h>
// void factorize(int, int);
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Prime factors are: ");
//     factorize(num , 2);
//     return 0;
// }

// void factorize(int n, int i)
// {
//     if (i <= n)
//     {
//         if( n % i == 0)
//         {
//             printf(" %d ", i);
//             n = n / i;
//         }
//         else
//             i++;
//             factorize(n , i);
//     }
// }

//* Write a recursive function to obtain the first 25 numberes of a Fobinacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence. 0 1 1 2 3 5 8 13 21 34 55 89 .....
// #include<stdio.h>
// int fibo(int);
// int main()
// {
//     int terms = 25, i, n = 0;
//     for ( i = 1; i <= terms; i++) // we have to prints 25 terms
//     {
//         printf("%d\t", fibo(n));
//         n++;
//     }
//     return 0;
// }
// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     else
//         return (fibo (n - 1) + fibo(n - 2));

// }

//! (1) A positive integer is entered through the keyboard, write a function to find the binary equivalent of this  number: (1) Without using recursion (2) Using recursion
//*(1) Without recursion
// #include <stdio.h>
// int non_recur(int num);
// int recur(int num);
// void main()
// {
//     int num;
//     printf("Enter a positive integer to find binary equivalent: ");
//     scanf("%d", &num);
//     printf("Decimal to Binary using recursion: %d\n", recur(num));
//     printf("Decimal to Binary without using recursion: %d", non_recur(num));
// }

// int non_recur(int num)
// {
//     int remainder, res = 0, pos = 1;

//     while (num != 0)
//     {
//         remainder = num % 2;
//         res = res + ( remainder * pos);
//         pos = 10 * pos;
//         num = num / 2;
//     }
//     return res;
// }

// int recur(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return ((num % 2) + 10 * recur(num / 2));
//     }
// }

//! (B) Write a recursive function to obtain the sum of first 25 natural numbers.
// #include<stdio.h>
// int rec_sum(int num);
// int main()
// {
//     int n;

//     printf("Enter the range of natural number: ");
//     scanf("%d", &n);
//     printf("\nSum of first %d numbers is: %d", n, rec_sum(n)); // passing input n to the recursive function num
// }

// int rec_sum(int num)
// {
//     int res = 0;
//     while (num)
//     {
//         res = res + num;
//         num = num - 1;
//     }
//     return res;
// }

//! (C) There are three pegs lebeled A, B and C. Four disks are placed on Peg A. The bottom-most disk is largest, and disks go on decreasing in size with the topmost disk being smallest. The objective of the game is to move the disks from peg A to peg C, using peg B as an auxiliary peg. The rules of the game game are as follows:
//* Only one disk may be moved at a time, and it must be the top disk on one of the pegs.
//* A larger disk should never be placed on the top of a smaller disk. 
//TODO Write a program to print out the sequence in which the disks should be moved such that all disks on peg A are finally transferred to peg C.

// #include<stdio.h>
// void towerofhanoi(int n, char src, char helper, char dest)
// {
//     if (n == 1)
//     {
//         printf("\ntransfer %d from %c to %c\n", n, src, dest);
//         return;
//     }
//     towerofhanoi(n-1, src, dest, helper);
//     printf("transfer %d from %c to %c", n, src, dest);
//     towerofhanoi(n-1, helper, src, dest);
// }
// int main()
// {
//     int n;
//     printf("Enter number of discs: ");
//     scanf("%d", &n);
//     towerofhanoi(n, 'A','B','C');
// }
