#include<stdio.h>

int main()
{
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
          return 0;
}