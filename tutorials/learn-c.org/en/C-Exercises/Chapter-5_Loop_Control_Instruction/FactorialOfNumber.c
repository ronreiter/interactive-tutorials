#include<stdio.h>
/* Calculation of factorial value of a number. */

int main()
{
    int num, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = i = 1;
    while(i <= num)
    {
        fact *= i;
        i++;
        
    }
    printf("Factorial value of %d = %d\n", num, fact);
    
    return 0;
}