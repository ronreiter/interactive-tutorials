//* Given three variables x, y, z, write a function to circularly shift their values to right. In other words, if x = 5, y = 8, z = 10, after circular shift y = 5, z = 8, x = 10. Call the function with variables a, b, c to circularly shift values.

// #include <stdio.h>
// int cir_shift(int *a, int *b, int *c);
// void main()
// {
// int x, y, z;
// printf("Enter x = ");
// scanf("%d", &x);
// printf("Enter y = ");
// scanf("%d", &y);
// printf("Enter z = ");
// scanf("%d", &z);
//
// printf("\nBefore Shift: x: %d\ty: %d\tz: %d", x, y, z);
//
// Call the shift function
// cir_shift(&x, &y, &z);
// printf("\nAfter Shift: x: %d\ty: %d\tz: %d", x, y, z);
// }
// int cir_shift(int *a, int *b, int *c)
// {
// int temp;
// temp = *c;
// *c = *b;
// *b = *a;
// *a = temp;
// }

// TODO Has to modify this code is not working properly
//* Define a function that receives weight of a commodity in kilograms and returns the equivalent weight in Grams, Tons and pounds. Call this function from main() and print the results in main().

// #include<stdio.h>
// void Convertweight(double kg, double *grams, double *tons, double *pounds)
// {
//     *grams = kg * 1000;
//     *tons = kg / 1000;
//     *pounds = kg * 2.20462;
// }
// int main()
// {
//     double weightInkg;
//     double grams, tons, pounds;
//     printf("Enter the weight in kg: ");
//     scanf("%lf", &weightInkg);

//     // Call the functions
//     Convertweight(weightInkg, &grams, &tons, &pounds);
//     printf("Weight in grams: %d\tTons: %d\tPounds: %d\t", grams, tons, pounds);
//     return 0;
// }

//* Define a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1,y1), B(x2, y2) and C(x3, y3).Use this function which returns a value 1 if the point (x, y) lines inside the triangle ABC, otherwise returns a value 0. Would you get advantage if you develop these functions to work on call by reference function?

#include <stdio.h>
#include <conio.h>
#include <math.h>

float dist(int, int, int, int);
float ar(int, int, int, int, int, int);

int main()
{
    int x1, x2, x3, y1, y2, y3, x, y;
    float A1, A2, A3, A;

    printf("Enter the co-ordinates of first point of the triangle (x1, y1): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the co-ordinates of second point of the triangle (x2, y2): ");
    scanf("%d%d", &x2, &y2);
    printf("Enter the co-ordinates of third point of the triangle (x3, y3): ");
    scanf("%d%d", &x3, &y3);

    printf("Enter the points to check it's position: ");
    scanf("%d%d", &x, &y);

    A1 = ar(x1, y1, x2, y2, x, y);
    printf("A1 : %f\n", A1);

    A2 = ar(x1, y1, x3, y3, x, y);
    printf("A2 : %f\n", A2);

    A3 = ar(x, y, x2, y2, x3, y3);
    printf("A3 : %f\n", A3);

    A = ar(x1, y1, x2, y2, x3, y3);
    printf("A : %f\n", A);

    if (!(A1 + A2 + A3 > A || A1 + A2 + A3 < A))
        printf("\n\nThe point (%d, %d) lies inside the triangle.", x, y);
    else
        printf("\n\nThe point (%d, %d) lies outside the triangle.", x, y);
    getch();
    return 0;
}

float dist(int x1, int y1, int x2, int y2)
{
    float distance;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return (distance);  
}

float ar(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a, b, c, area, s;
    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x2, y2, x3, y3);

    s = ( a + b + c) / 2;
    area = sqrt(s*(s - a)* (s - b) * (s - c));
    return (area);
}
