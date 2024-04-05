//* Write the macro definitions of the following: 
//1. To test whether a character is a lowercase letter or not.
//2. To test whether a character is uppercase or not.
//3. To whether a character is alphabet or not, make use of these macros you defined in 1 and 2 above.
//4. TO obtain the bigger of two numbers.

//! Macros ISUPPER, ISLOWER, ISALPHA, BIG
// #include<stdio.h>
// # define ISUPPER(x) (x >= 65 && x <= 90 ? 1:0)
// # define ISLOWER(x) (x >= 97 && x <= 122 ? 1:0)
// # define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
// # define BIG(x, y) (x > y ? x : y)
// int main()
// {
//     char ch;
//     int d, a, b;
//     printf("\nEnter any alphabet/character: ");
//     scanf("%c", &ch);

//     if (ISUPPER (ch) == 1)
//         printf("you entered a capital letter\n");
//     if (ISLOWER (ch) == 1)
//         printf("you entered a lower case letter\n");
//     if (ISALPHA (ch) != 1)
//         printf("you entered a character other than an alphabet\n");

//     printf("Enter any two number: ");
//     scanf("%d%d", &a, &b);

//     d = BIG (a, b);
//     printf("Bigger number is %d\n", d);
//     return 0;
// }

//* Write macro definitions with arguments for calculation of area and perimeter of a triangle, a square and a circle. Store these macro definitions in a file "areaperi.h". Include this file in your program, and use the macro definitions for calculating area and perimeter for different squares, triangle and circles. 

// areaperi.h
// Storing the macro definitions of area and perimeter of circles, triangle and  square in the "areaperi.h" header file



// // Program to use macros in the header file "areaperi.h"
// #include<stdio.h>
// #include"areaperi.h"
// int main()
// {
//     int d, a, b;
//     float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;
//     float r, base, height;
    
//     printf("\nEnter radius of the circle:\n");
//     scanf("%f", &r);
//     p_cir = PERIC(r);
//     printf("Circumference of the circle: %f\n", p_cir);

//     a_cir = AREAC(r);
//     printf("Area of the circle: %f\n", a_cir);

//     printf("Enter side of a square: ");
//     scanf("%f", &sid);
//     p_sqr = PERIS(sid);
//     printf("Perimeter of square = %f\n", p_sqr);
//     a_sqr = AREAS(sid);
//     printf("Area of square: %f\n", a_sqr);

//     printf("Enter length of 3 sides of trianlge: ");
//     scanf("%f%f%f", &sid1, &sid2, &sid3);

//     p_tri = PERIT(sid1, sid2, sid3);
//     printf("Perimeter of triangle = %f\n", p_tri);

//     printf("Enter base and height of the triangle: ");
//     scanf("%f%f", &base, &height);
//     a_tri = AREAT(base, height);
//     printf("Area of the traingle = %f\n", a_tri);

//     return 0;
// }

//[C]
//(a) if a macro is not getting expanded as per your expectation, how will you find out how is it being expanded by the preprocessor?
//* Before compilation, our source code is expanded and stored in the file FILENAME.I, so we can open this file and check how our program is getting expanded.


//(b) write macro definitions for the following: 
// 1. To find the arithmetic mean of two numbers. 
// 2. To find absolute value of a number. 
// 3. To convert an uppercase alphabet to lowercase. 
// 4. To obtain the biggest of three numbers.

// #include<stdio.h>

// #define MEAN(a, b)  ( (a + b) / 2.0 )
// #define ABS(num)    ( (num > 0) ? num : (num * -1) )
// #define LOWER(ch)   ( ch + 32 )
// #define BIGGEST(a, b, c) ( (a > b && a > c) ? a : ( (b > c) ? b : c ) )

// int main()
// {
//     int choice, num, repeat;
//     float a, b, c;
//     char ch;

//     do
//     {
//         printf("1. Find Arithmetic Mean of 2 numbers\n");
//         printf("2. Find Absolute Value of a number\n");
//         printf("3. Convert a Uppercase letter to lowercase\n");
//         printf("4. Find Biggest of 3 numbers\n");

//         printf("\nEnter your choice\n");
//         scanf("%d", &choice);

//         switch(choice)
//         {
//             case 1: printf("Enter 2 numbers\n");
//                     scanf("%f%f", &a, &b);
//                     printf("Arithmetic Mean: %0.2f\n", MEAN(a, b));
//                     break;
//             case 2: printf("Enter a integer number\n");
//                     scanf("%d", &num);
//                     printf("Absolute value of |%d| is %d\n", num, ABS(num));
//                     break;
//             case 3: printf("Enter a uppercase alphabet\n");
//                     fflush(stdin);
//                     scanf("%c", &ch);

//                     if( ch >= 65 && ch <= 90)
//                         printf("To Lowercase: %c\n", LOWER(ch));
//                     else
//                         printf("Enter a valid uppercase alphabet\n");

//                     break;
//             case 4: printf("Enter 3 numbers\n");
//                     scanf("%f%f%f", &a, &b,&c);
//                     printf("Biggest no is %0.2f\n", BIGGEST(a, b, c));
//                     break;
//             default: printf("Please enter valid choice\n");
//         }

//         printf("\nDo you want to continue? Ans: 0 or 1\n");
//         scanf("%d", &repeat);

//         printf("\n");

//     }while(repeat);

//     return 0;
// }


//(c) Write macro definitions with arguments for calculation of Simple Interest and Amount. Store these macro defintions in a file "interest.h". Include this file in your program, and use the macro definitions for calculating Simple Interest and Amount.

#include<stdio.h>
#include<conio.h>
#include"interest.h"

int main()
{
    float p, t, r, si, amnt;
    printf("Enter the principal, time in year and rate of interest : ");
    scanf("%f%f%f", &p, &t, &r);

    si = SI(p, t, r);
    amnt = AMOUNT(si, p);
    printf("\nSimple Interest : %f\nAmount : %f\n", si, amnt);
    _getch();
    return 0;
}