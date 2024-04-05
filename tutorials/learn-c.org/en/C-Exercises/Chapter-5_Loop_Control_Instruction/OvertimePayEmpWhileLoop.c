#include<stdio.h>
int main()
{
    float otpay;
    int hour, i = 1;
    while( i <= 10) /* loop for 10 employees */
    {
        printf("\nEnter no. of hours worked: ");
        scanf("%d", &hour);
        
        if(hour >= 40)
            otpay = (hour - 40) * 120;
        else
            otpay = 0;
        printf("Hours = %d\nOvertime pay= Rs.%.2f", hour, otpay);
  
    }
    
    return 0;
}