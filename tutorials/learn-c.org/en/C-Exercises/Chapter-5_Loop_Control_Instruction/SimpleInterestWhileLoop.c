#include<stdio.h>

int main()
{
    int p, n, count;
    float r, si;
    count = 1;
    while(count <= 3){
    printf("\nEnter values of principal, number of years and rate of interest: ");
    scanf("%d%d%f", &p, &n, &r);
    
    si = p * n * r/100;
    printf("Simple interest: Rs. %f\n", si);
    
    count = count + 1;
    }
    return 0;
}