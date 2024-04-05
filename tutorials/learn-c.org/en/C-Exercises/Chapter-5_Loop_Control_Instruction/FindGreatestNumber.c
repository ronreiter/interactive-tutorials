#include<stdio.h>

int main()
{
    int x, y, z, max;
    printf("Enter 1st Number: ");
    scanf("%d", &x);
    printf("Enter 2nd Number: ");
    scanf("%d", &y);
    printf("Enter 3rd Number: ");
    scanf("%d", &z);


    /*conditional operator
    variable (for storing value)=(expression1 ? True_block : False_block);
    here expression 1 is a conditional statement
    if expression1 is true than True block will be execute
    otherwise False block will be execute*/

    max = x;

    max = (max<y ? y : max);
    max = (max<z ? z : max);

    printf("Greatest Number is %d", max);
    
    return 0;
}