#include<stdio.h>
#include<conio.h>
int main()
{
    /* Question -- 1
    int a, b, c, equi, iso, sca;
    printf("Enter three angles of the triangle.\n");
    scanf("%d%d%d", &a, &b, &c);

    // Equilateral triangle
    if( a == 60 && b == 60 && c == 60)
        printf("the triangle is Equilateral\n");

    else if ( a == b || b == c || c == a )
        printf("the triangle is Isosceles triangle.\n");
    else
        printf("the angle is scalane triangle");
    return 0; */


   
   float r, g, b, rf, gf, bf, max, w, c, m, y, k;

   printf("Enter the value of RED(0-255).\n");
    scanf("%f", &r);
    
    printf("Enter the value of GREEN(0-255).\n");
    scanf("%f", &g);

    printf("Enter the value of BLUE(0-255).\n");
    scanf("%f", &b);
    
    rf = r/255;
    gf = g/255;
    bf = b/255;
    
    printf("Red: %f\n Green: %f\n Blue: %f\n", &rf, &gf, &bf);
    
    
    max = rf;
    if(max < bf)
    max = bf;
    if (max < gf)
    max = gf;
    
    
    w = max;
    printf("White: %f\n", w);
    
    c = (w-rf)/w;
    m = (w-gf)/w;
    y =(w-bf)/w;
    
    // k = black 
    k = 1 - w;
    
    printf("Value of Cyan: %f\n", c);
    printf("Value of Magenta: %f\n", m);
    printf("Value of Yellow: %f\n", y);
    printf("Value of Black: %f\n", k);
    
    
    return 0;
}