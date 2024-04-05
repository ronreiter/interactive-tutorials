#include<stdio.h>
int main()
{
    int i, j, k, count = 3;
    for ( i = 0; i <= count; i++)
    {
        for ( j = 0; j <= 4; j++)
        {
            for ( k = 0; k < count; k++)
            {
                if (i == 3 && j == 3 && k == 3)
                goto out;
                else
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    out: printf("Out of the loop at last\n");

    return 0;
}

//! Problem 7.1
//* Write a menu driven program which has following options: 1. Factorial of a number 2. Prime or not 3. Odd or even 4. Exit Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the 'Exit' option the program should continue to exit.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact;
    while (1)
    {
        printf("\n1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd / Even\n");
        printf("4. Exit\n");
        printf("Your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Number: ");
            scanf("%d", &num);

            fact = 1;
            for (i = 1; i <= num; i++)
                fact = fact * i;
            printf("Factorial value = %d\n", fact);
            break;

        case 2:
            printf("\nEnter Number: ");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (i == num)
                printf("Prime Number\n");
            break;

        case 3:
            printf("\nEnter the value: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
            break;

        case 4:
            exit(0); //! Terminates program execution
        default:
            printf("Wrong Choice\n");

        }
    }

    return 0;
}