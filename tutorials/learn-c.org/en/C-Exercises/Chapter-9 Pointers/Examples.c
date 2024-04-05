// ! Utility of Call by Reference

// #include<stdio.h>
// void areaperi(int, float *, float *);
// int main()
// {
//     int radius;
//     float area, perimeter;
//     printf("Enter radius of a circle ");
//     scanf("%d", &radius);
//     areaperi (radius, &area, &perimeter);
//     printf("Area = %f\n", area);
//     printf("Perimeter = %f\n", perimeter);
//     return 0;
// }
// void areaperi(int r, float *a, float *p)
// {
//     *a = 3.14 * r * r;
//     *p = 2 * 3.14 * r;
// }

//! Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this functions from main() and print the results in main().

// #include<stdio.h>
// #include<math.h>
// void stats(int* , int* , double*);
// int main()
// {
//     int sum, avg;
//     double stdev;
//     stats(&sum, &avg, &stdev);
//     printf("Sum = %d\nAverage = %d\nStandard Deviation = %lf", sum, avg, stdev);

//     return 0;
// }

// void stats(int *sum, int *avg, double *stdev)
// {
//     int n1, n2, n3, n4, n5;
//     printf("\nEnter %numbers: ");
//     scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

//     *sum = n1 + n2 + n3 + n4 + n5;
//     *avg = *sum / 5;

//     *stdev = sqrt((pow(( n1 - *avg), 2.0) + pow((n2 - *avg), 2.0) + pow ((n3 - *avg), 2.0) + pow((n4 - *avg), 2.0)) / 4);
// }


// ! Write a program that defines s functions that calculates power of one number raised to another and factorial value of a number in one call.

// #include<stdio.h>
// #include<math.h>
// void power_fact(float, int, int, float*, int*);
// int main()
// {
    // float a;
    // int b, number, factorial;
    // float pow;
    // printf("Enter a and b number for calculating a raised to b: ");
    // scanf("%d%d", &a, &b);
// 
    // printf("Enter a number whose factorial is to be calculated: ");
    // scanf("%d", &number);
// 
    // power_fact(a,b, number, &pow, &factorial);
    // printf("Power = %f Factorial = %d", pow, factorial);
// 
    // return 0;

// }

// void power_fact(float x, int y, int num, float *power, int *fact)
// {
//     float res = 1;
//     int i;
//     for(i = 1; i <= y; i++)
//         res = res * x;
//         *power = res;
//         res = 1;
//         for ( i = 1; i <= num; i++)
//         res = res * i;
//         *fact = res;
// }

//   What will be the output of the following programs?


