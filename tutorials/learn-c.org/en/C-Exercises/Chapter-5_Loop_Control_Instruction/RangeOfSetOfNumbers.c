// Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.\
//If biggest number in the list is 5 and the smallest number in the list is 1. The difference between them is the range. i.e., 5 - 1 = 4. so range is 4.

#include<stdio.h>
int main()
{
    int limit, num, small, big, range;
    printf("Enter the limit: \n");
    scanf("%d", &limit);

    printf("Enter %d numbers.\n", limit);
    scanf("%d", &num);

    small = big = num;
    limit = limit - 1;


    while (limit)
    {
        scanf("%d", &num);

        if (num > big)
        {
            big = num;
        }
        if (num < small)
        {
            small = num;
        }

        limit--;
        
    }
    range = big - small;
    printf("Smallest number = %d\nBiggest number = %d\n", small, big);
    printf("Range of the number = %d", range);

    return 0;
}