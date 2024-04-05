#include<stdio.h>
#include<math.h>
int main()
{
    float angle, sum;
    int degree, result;
    //printf("Enter angle in degree: ");
    //scanf("%f", &angle);
    
    // degree to radian
    /* angle = angle * (3.14/180);
    sum = pow(sin(angle),2) + pow(cos(angle),2);
    if(sum == 1)
    {
        printf("The sum of sine and cosine is 1.");
    }
    else
    {
        printf("The sum of sine and cosine is not equal to 1.");
    } */
    
    
    printf("Enter the degree of angle: "); 
    scanf("%d", &degree); 
    result = (sin(degree)*sin(degree) + cos(degree)*cos(degree)); 
    printf("Result is: %d", result);
    return 0;
}