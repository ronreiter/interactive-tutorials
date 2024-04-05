// #include<stdio.h>
// void Italy();
// void Brazil();
// void Argentina();
// int main()
// {
//     printf("I am in main./n");
//     Argentina(); // The given sequence is responsible for the output that in which sequence your output is gonna printed.
//     Italy();
//     Brazil();
//     return 0;
// }
// void Italy(){
//     printf("I am from Italy.\n");
// }
// void Argentina(){
//     printf("I am from Argentina.\n");
// }
// void Brazil(){
//     printf("I am from Brazil.\n");
// }

//* Sending and receiving values between functions
// #include<stdio.h>
// int calsum (int x, int y, int z);
// int main()
// {
//     int a, b, c, sum;
//     printf("Enter any three numbers: \n");
//     scanf("%d%d%d", &a, &b, &c);
//     sum = calsum(a, b, c);
//     printf("Sum = %d\n", sum);
//     return 0;
// }
// int calsum(int x, int y, int z)
// {
//     int d;
//     d = x + y + z;
//     return (d);
// }

#include<stdio.h>
float square(float);
int main()
{
    
    float a, b;
    printf("Enter any number: ");
    scanf("%f", &a);
    b = square(a);
    printf("Square of %f is %f\n", a, b);
    return 0;
}
float square (float x)
{
    float y;
    y = x * x;
    return (y);
}
