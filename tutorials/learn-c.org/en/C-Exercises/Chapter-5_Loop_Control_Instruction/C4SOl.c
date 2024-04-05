#include<stdio.h>

int main()
{
    /*
    h = Hardness of steel
    cc = Carbon content
    ts = Tensile strength
    */
    float h, cc, ts;
    //    flags for three conditions
    
    int h_f=0, cc_f=0, ts_f=0;  //here 0 represent False and one represent for True
    int grade;
    printf("Enter the value of Hardness: ");
    scanf("%f", &h);

    printf("Enter the value of Carbon Content: ");
    scanf("%f", &cc);

    printf("Enter the value of Tensile Strength: ");
    scanf("%f", &ts);

    //For first three conditional
    if (h>50)
        h_f=1;
    if (cc<0.7)
        cc_f=1;
    if (ts>5600)
        ts_f=1;

    //For Finding Grade
    //1. if none of the conditions are met
    if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;

    //2. if only one condition is met
    if(h_f==1 || cc_f==1 || ts==1)
        grade = 6;

    //3 if condition (i) and (iii) are met
    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;

    //4. if conditions (ii) and (iii) are met
    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;

    //5. if conditions (i) and (ii) are met
    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;

    //6. if all the three conditions are met
    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;

    printf("The grade of steel is: %d", grade);
    return 0;
}