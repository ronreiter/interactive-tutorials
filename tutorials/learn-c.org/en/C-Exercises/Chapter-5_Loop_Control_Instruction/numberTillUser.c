// Write a program to enter numbers till the users wants. At the end it should display the count of positive, negative and zeros entered.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, limit, positive=0, negative=0, zero=0;
    printf("Enter the limit of integers you are going to enter.\n");
    scanf("%d", &limit);

    printf("Enter %d numbers\n", limit);

    while (limit)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else 
        {
            zero++;
        }
        
        limit--;
    }

    printf("\nPositive numbers: %d\n", positive);
    printf("\nNegative numbers: %d\n", negative);
    printf("\nZero numbers: %d\n", zero);

    return 0;

}