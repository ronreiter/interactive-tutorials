//* write a program to print the multiplication table of the number entered by the user.

// #include<stdio.h>
// int main()
// {
//     int i, num = 0, mult = 0;
//     printf("Enter a number to see table of that number: ");
//     scanf("%d", &num);

//     for(i = 1; i <= 10; i++)
//     {
//         mult = num * i;
//     printf("%d * %d = %d\n", num, i, mult);
//     }
//     return 0;
// }

//* Q.2 According to a study, the approximate level of intelligence of a person can be calculated using the following formula: i = 2 + (y + 0.5 x). Write a program that will produce a table of values of i, y and x.
//* Where, y varies from 1 to 6, and for each value of y, x varies from 5.5 to 12.5 in steps to 0.5.

// #include<stdio.h>
// int main()
// {
//     float i, x;
//     int y, count = 1;
//     for ( y = 1; y <= 6; y++)
//     {
//         for ( x = 5.5; x <= 12.5; x = x + 0.5)
//         {
//             i = 2 + (y + 0.5 * x);
//             printf("%d. i = %.2f, \t x = %.2f, \t y = %d\n", count++, i, x, y); // incrementing the count to print serial number Note: mostly initialise the count in when making the variable
//         }
//     }
//     return 0;
// }

//* when interest compounds q times per year at an annual rate of r % for n years, the principal p compounds to an amount a as per the following formula: a = p (1 + r / q)^nq write a program to read 10 sets of p, r, n & q and calculate corresponding as.

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// float p, n, r, q, a;
// int count = 1;
//
// for (count <= 10; count++;)
// {
// printf("Enter principal amount.\n");
// scanf("%f", &p);
//
// printf("Enter number of year.\n");
// scanf("%f", &n);
//
// printf("Enter rate of interest.\n");
// scanf("%d", &r);
//
// r = r / 100;
//
// printf("Enter number of times you compound per year.\n");
// scanf("%d", &q);
//
// a = p * pow( (1 + (r/q)), n * q );
//
// printf("Compounded amount is %f\n\n", a);
// }
//
// return 0;
// }

//! Q.(d)
//* The natural logarithm can be approximated by the following series: see the book

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
// int i;
// float x, d, p, r, res = 0; // Initialising the res (result) is imp. If you do not do it it will show you any random outut.
// printf("Enter value of x: ");
// scanf("%f", &x);
// d = (x - 1)/ x;
//
// for(i = 2; i <= 7; i++)
// {
// p = pow(d,i);
// r = p / 2;
// res = res + r;
// }
// res = d + res;
// printf("Result: %f", res);
//
// return 0;
// }

//! Q.(e)
// * Write a program to generate all pythagorean triplets with side length less than equal to 30.

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
// int a, b;
// float c;
// pythagorean triplets a*a + b*b = c*c
// for(a = 1; a <= 30; a++)
// {
// for(b = 1; b <= 30; b++)
// {
// c = sqrt(a*a + b*b);
// if (c == (int)c)
// {
// printf("(%d, %d, %d)\t", a, b, (int)c);
// }
// }
// }
// return 0;
// }

//! Q.(f)
//* Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for the last 10 year. write a program to determine the population at the end of every year in the last decade.
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
// int i;
// float py = 100000;
// for(i = 1; i <= 10; i++)
// {
// py = py - py * 0.1;
// printf("%d Year = %.1f\n", i, py); //use (int)py to convert it into integer
// }
// return 0;
// }

//! Q.(g)
//* Ramanujan number (1729) is the smallest number which can be expressed as form of two cubes in two different ways - 1729 can be expressed as 1 power 3 + 12 power 3 and 9 power 3 + 10 power 3. Write a program to print all such numbers up to a reasonable limit.

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
// int i, num, x, y, count;
// num = 30000;
// for loop for range(30000)
// for(i = 1; i <= num; i++)
// {
// count = 0;
// for(x = 1; x*x*x < i; i++)
// {
// for loop for finding ramanujan number
// for(y = x; x*x*x+y*y*y <= i; y++)
// {
// list all the numbers
// if(x*x*x+y*y*y == i)
// {
// count++;
// }
// }
// }
// if (count == 2)
// {
// printf("%d\n", i);
// }
// }
// return 0;
// }

//! Q.(h)
//* Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// int main()
// {
        // int h;
        // for (h = 0; h < 24; h++)
        // {
                // if (h == 0){
// 
                        // printf("%d Midnight\t", h);
                // continue;
                // }
// 
                // if (h > 0 && h < 11){
// 
                        // printf("%d AM\t", h);
                // continue;
                // }
// 
                // if(h == 12){
// 
                // printf("%d Noon\t", h);
                // continue;
                // }
// 
                // if(h > 12 ){
                // printf("%d PM\t", h);
                // continue;
                // }
        // }
// 
        // return 0;
// }
