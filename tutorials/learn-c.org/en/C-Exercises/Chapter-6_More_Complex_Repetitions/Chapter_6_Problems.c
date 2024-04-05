//! Problem : 1
// Write a program to print all prime numbers from 1 to 300;
// #include<stdio.h>
// int main()
// {
    // int i, n = 1;
    // printf("Prime numbers between 1 to 300 \n1\t");
    // for( n = 1; n <= 300; n++)
    // {
        // i = 2;
        // for( i = 2; i < n; i++)
        // {
            // if (n % i == 0)
            // break;
        // }
        // if ( i == n)
        // printf("%d\t", n); // (\t) prints the numbers in tabular form
    // }
    // 
    // return 0;
// }
// Output: Prime numbers between 1 to 300
// 1	2	3	5	7	11	13	17	19	23	29	31	37	41	43	47	53	59	61	67	71	73	79	83	89	97	101	103	107	109	113	127	131	137	139	149	151	157	163	167	173	179	181	191	193	197	199	211	223	227	229	233	239	241	251	257	263	269	271	277	281	283	293

//! Problem-6.2
//* Write a program to add first seven terms of the following using a for loop. 1/1! + 2/2! + 3/3! + 

// #include<stdio.h>
// int main()
// {
    // int i = 1, j;
    // float factorial, sum = 0.0;
    // for( i = 1; i <= 7; i++)
    // {
        // factorial = 1.0;
        // for( j = 1; j <= i; j++)
            // factorial *= j;
        // sum = sum + i/factorial;
    // }
        // printf("Sum of series =%f\n", sum);
    // return 0;
// }
// 
//! Problem- 6.3
//* Write a program to generate all combination of 1, 2 and 3 using for loop.
// generate all possible combinations of 1 2 3

// #include<stdio.h>
// int main()
// {
//     int i = 1, j = 1, k = 1; //* Initialising the variables is must important
//     for ( i = 1; i <= 3; i++)
//     {
//         for ( j = 0; j <= 3; j++)
//         {
//             for ( k = 0; k <= 3; k++)
//             printf("%d%d%d\n", i, j, k);
//         }
        
//     }
    
//     return 0;
// }

