#include<stdio.h>

int main()
{
    int i, num;
    
    printf("Enter a number to check table: ");
    scanf("%d", &num);
    i = 1;
    while(i <= 10)
    {
    printf("\n%d * %d = %d", num, i, (num * i));
    i++;
    
    }
    return 0;
}