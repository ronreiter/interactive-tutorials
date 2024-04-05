//! 1
//* Calculate the factorial value of an integer using a functions
// #include<stdio.h>
// int fact(int);
// int main()
// {
    // int num;
    // int factorial;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // factorial = fact(num);
    // printf("Factorial of %d = %ld\n", num, factorial);
    // return 0;
// }
// int fact(int num)
// {
    // int i;
    // int factorial = 1;
    // for(i = 1; i <= num; i++)
    // factorial = factorial * i;
    // return (factorial);
// }

// * Write a function power ( a, b ), to calculate the value of a raised to 
// #include<stdio.h>
// float power( float, int);
// int main()
// {
//     float x, pow;
//     int y;
//     printf("\nEnter two numbers: ");
//     scanf("%f %d", &x, &y);
//     pow = power(x, y);
//     printf("%f to the power %d = %f\n", x, y, pow);
//     return 0;
// }
// float power(float x, int y)
// {
//     int i;
//     float p = 1;
//     for(i = 1; i <= y; i++)
//         p = p * x;
//     return (p);
// }

//* Write a general-purpose function to convert any given year into its 
// Roman equivalent. Use these Roman equivalents for decimal 
// numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
// Example:
// Roman equivalent of 1988 is mdcccclxxxviii.
// Roman equivalent of 1525 is mdxxv.
// #include<stdio.h>
// #include<string.h>
// void Roman(int number)
// {
//     while (number)
//     {
//         if (number >= 1000)
//         {
//             printf("m");
//             number = number - 1000;
//         }
//         else if (number >= 500)
//         {
//             printf("d");
//             number = number - 500;
//         }
//         else if (number >= 100)
//         {
//             printf("c");
//             number = number - 100;
//         }
//         else if (number >= 50)
//         {
//             printf("l");
//             number = number - 50;
//         }
//         else if (number >= 10)
//         {
//             printf("x");
//             number = number - 10;
//         }
//         else if (number >= 5)
//         {
//             printf("v");
//             number = number - 5;
//         }
//         else if (number >= 1)
//         {
//             printf("i");
//             number = number - 1;
//         }
//         // printf("\n");
//     }
// }
// int main(){
//     // function to convert decimal into Roman
//     int year;
//     printf("Enter the year to get it's Roman equivalent: ");
//     scanf("%d", &year);
//     Roman(year);
// }
//* Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not. 
// 
// #include<stdio.h>
// int leapyear(int year)
// {
    // if (year % 4 == 0)
    // {
        // if (year % 100 == 0)
        // {
            // if (year % 400 == 0)
            // {
                // return 1;
            // }
        // }
    // }
    // else {
        // return 0;
    // }
// }
// 
// int main()
// {
    // int year;
// 
    // printf("Input the year to check leap year or not: ");
    // scanf("%d", &year);
// 
    // if (leapyear(year))
    // {
        // printf("%d is a leap year.", year);
    // }
    // else {
        // printf("%d is not a leap year.", year);
    // }
    // return 0;
// }

//* A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.

// #include<stdio.h>
// #include<math.h>
// int prime(int num)   
// {
//     // if number is less than 2, then it is not a prime number 
//     if (num < 2)
//     {
//         return 0;
//     }
//     // if number is equal to 2 then it is a prime number 
//     if (num == 2)
//     {
//         return 1;
//     }

//     // if the number is greater than 2, 
//     // check if it is evenly divisible by any number between 2 and the square root of the number 
    
//     for(int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int num;
//     printf("Enter a number, Check number is prime or not: ");
//     scanf("%d", &num);
//     if (prime(num))
//     {
//         printf("%d is a Prime number.\n", num);
//     }
//     else
//     {
//         printf("%d is not a prime number.");
//     }
//     return 0;
// }

//* Write a program to convert decimal into binary number using function.

#include<stdio.h>
long tobin(int);
int main()
{
    long bin;
    int dec;
    printf("\n Enter any decimal number to convert into binary number: ");
    scanf("%d", &dec);
    bin = tobin(dec);

    printf("The Binary value is : %ld\n\n", bin);

    return 0;
}

long tobin(int dec)
{
    long bin = 0, remainder, f= 1;
    while (dec != 0)
    {
        remainder = dec % 2;
        bin = bin + remainder * f;
        f = f * 10;
        dec = dec / 2;
    }
    return bin;
}

// * Write a program to check Armstrong and perfect numbers using the function.

#include<stdio.h>
int checkArmstrong (int n1);
int checkPerfect (int n2);

int main()
{
    int n1;
    printf("\n\n check armstrong and perfect numbers: \n");
    printf("Input any number: ");
    scanf("%d", &n1);

    // Calls the isArmstrong() function
    if(checkArmstrong(n1))
    {
        printf("The %d is an Armstrong number. \n");
    }
    else 
    {
        printf("The %d is not an Armstrong number.\n, n1");
    }

    //Calls the checkPerfect() function
    if(checkPerfect(n1))
    {
        printf("The %d is a perfect number. \n");
    }
    else 
    {
        printf("The %d is not a perfect number. \n\n");
    }
    return 0;
}

// check whether a three digits number is Armstrong number or not.
// An Armstrong number is an n-digit number that is equal to the sum of the n-th powers of the digits

int checkArmstrong(int n1)
{
    int ld, sum, num;
    sum = 0;
    num = n1;
    while( num != 0)
    {
        ld = num % 10; // find the last digit of the number 
        sum += ld * ld * ld; // calculate the cube of the last digit and adds to sum
        num = num / 10;
    }
    return (n1 == sum);
}

// checks whether the number is perfect number or not.
// a perfect number is a positive integer that is equal to the sum of its positive excluding the number itself

int checkPerfect (int n1)
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for(i = 1; i<num; i++)
    {
        //  If i is a divisor of n1
        if(num % i == 0)
        {
            sum += i;
        }
    }
    return (n1 == sum);
}