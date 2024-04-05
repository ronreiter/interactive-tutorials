#include<stdio.h>

int main()
{
    float w, h, BMI, f;
    
    printf("Enter your weight(kg): ");
    scanf("%f", &w);
    printf("Enter your height(ft): ");
    scanf("%f", &f);
    
    f = f * 0.3048;
    
    printf("This is your height in Meter.\n Type the value below : %.1fm \n\n", f);
    
    printf("Enter your height in meter(m): ");
    scanf("%f", &h);
    
    BMI = w / (h * h);
    
    printf("Your BMI is :  %.2f\n\n", BMI);
    
    if(BMI>0 && BMI <= 15)
    printf("Your BMI Category : Starvation");
    
    else if(BMI >= 15.1 && BMI <= 17.5)
    printf("Your BMI Category : Anorexic");
    
    else if(BMI > 17.6 && BMI <= 18.5)
    printf("Your BMI Category : Underweight");
    
    else if(BMI > 18.6 && BMI <= 24.9)    
    printf("Your BMI Category : Ideal");
    
    else if(BMI > 25 && BMI <= 25.9)
    printf("Your BMI Category : Overweight");
    
    else if(BMI > 30 && BMI <= 30.9)
    printf("Your BMI Category : Obese");
    
    else if(BMI >= 40)
    printf("Your BMI Category : Morbidly Obese");
    
    
    
    return 0;
}