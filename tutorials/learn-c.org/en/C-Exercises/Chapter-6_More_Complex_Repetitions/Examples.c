//* Calculation of simple interest for 3 sets of p, n and r 
// #include<stdio.h>
// int main()
// {
    // int p, n, count;
    // float r, si;
// 
    // for(count = 1; count <= 3; count = count + 1)
    // {
        // printf("Enter values of p, n and r\n");
        // scanf("%d%d%f", &p, &n, &r);
// 
        // si = p * n * r / 100;
        // printf("Simple interest = Rs.%f\n", si);
    // }
    // return 0;
// }



// #include<stdio.h>
// int main()
// {
    // int i, j;
    // for ( i = 10; i; i--)
        // printf("%d\n", i);
    // 
    // for(i < 4; j = 5; j = 0)
        // printf("%d", i);
    // return 0;
// }

//? Write the program to print numbers from 1 to 10 in different ways:

// #include<stdio.h>
// int main(){
    // int i;
    // for(i = 1; i <= 10; i++) // never use semicolon after closing braces of the for loop
    // printf("%d\n", i);
// 
    // return 0;
// }


// #include<stdio.h>
// int main(){
    // int i;
    // for(i = 1; i <= 10;){
        // printf("%d\n", i);
        // i = i + 1; // semicolon after the condition is necessary
    // }
// 
    // return 0;
// }


// #include<stdio.h>
// int main()
// {
    // int i = 1;
    // for(;i<=10; i = i + 1)
        // printf("%d\n", i);
    // return 0;
// } // here initialization is done in the declaration statement itself but still the semicolon before the condition is necessary.

// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     for(; i <= 10;) // semicolon is necessary for code to run
//     {
//         printf("%d\n", i);
//         i = i + 1;
//     }
//     return 0;
// }   neither the initialization nor the incrementation is done in the (for) statement, but still the semicolon are necessary.

// #include<stdio.h>
// int main()
// {
    // int i;
    // for(i = 0;i++<10;)
        // printf("%d\n", i);
    // return 0;
// } // it is necessary to initialize i to 0


// #include<stdio.h>
// int main()
// {
    // int i;
    // for( i = 0; ++i <= 10;)
        // printf("%d", i);
    // return 0;
// }

//? Nesting of Loops
//Demonstration of nested loops

// #include<stdio.h>
// int main()
// {
    // int r, c, sum;
    // for ( r = 1; r <= 3; r++) //outer loop
    // {
        // for(c = 1; c <= 2; c++) //inner loop
        // {
            // sum = r + c;
            // printf("r = %d c = %d sum = %d\n", r, c, sum);
            // printf("r = %d c = %d sum = %d\n", r, c, r + c);
        // }
    // }
    // return 0;
// }


//! The do-while loop
//* Difference between while and d0-while loop
//? The while tests the condition before executing any of the statements within the while loop. The do-while tests the condition after having executed the statements within the loop. The do-while execute its statements at least once even if the condition fails for the first time. The while on the other hand will not executes its statements if the condition fails for the first time.

// Lets check it by an example 
// #include<stdio.h>
// int main()
// {
    //* If we remove do loop and only executes the while loop it will not print anything and as we know the statement is false or not the do loop executes atleast one time
    // do
    // {
        // printf("Credit is yours, pleasure is mine.\n");
    // } while ( 4 < 1);
    // 
    // return 0;
// }

//! The break statement
//* when we want to jump out from the loop instantly, without waiting to get back to the condition. The keyword (break) allows us to do this.

// ! Ex- 6.1 
//Write a program to determine whether a number is prime or not. A prime number is set to be prime if it is divisible only by 1 or itself.

// #include<stdio.h>
// int main()
// {
    // int num, i;
    // printf("Enter a number ");
    // scanf("%d", &num);
// 
    // i = 2;
    // while(i <= num - 1)
    // {
        // if( num % i == 0)
        // {
            // printf("Not a prime number\n");
            // break;
        // }
        // i++;
    // }
    // if(i == num)
        // printf("Prime number\n");
    // return 0;
// }

//! Ex- Break Statement
// #include<stdio.h>
// int main()
// {
    // int i = 1, j = 1;
    // while (i++ <= 100)
    // {
        // while (j++ <= 200)
        // {
            // if( j == 150 )
            // break;
            // else 
            // printf("%d%d\n", i,j);
        // }
    // }
    // return 0;
// }

//! Ex- Continue Statement
//* continue is usually associated with an if.

// #include<stdio.h>
// int main()
// {
    // int i, j;
    // for( i = 1; i <= 2; i++)
    // {
        // for( j = 1; j <= 2; j++)
    // {
        // if(i == j)
            // continue;
        // printf("%d%d\n", i , j);
    // }  
    // }
    // return 0;
// }

//! Odd Loop
//* Execution of loop an unknown numbers of times
#include<stdio.h>
int main()
{
    char another;
    int num;
    do
    {
        /* code */
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("square of %d is %d \n", num, num * num);
        printf("Want to enter another number y/n: ");
        fflush(stdin); //* fflush is used to get rid of peculiarity of scanf(). After supplying a number when we hit the Enter Key, scanf() assigns the number to the variable num and keeps the Enter key unread in the keyboard buffer. So, when it's time to supply y or n. stdin means buffer related with standard input device, i.e., keyboard.
        scanf("%c", &another);
    } while (another == 'y');
    return 0;
}