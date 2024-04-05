#include<stdio.h>

int main()
{
    int x, power;
    int y, i;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &x, &y);
    
    power = i = 1;
    while(i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%d to the power %d is %d\n", x, y, power);
    return 0;
}