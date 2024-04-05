// Problem 1
// Write a program that extracts parts of the given string from the specified position. For example, if from the string "Working with string is fun", starting from position 3, 4 characters are extracted then it should return "king".
/// @brief To extract a substring from a string
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char str[20], news[20];
//     char *s, *t;
//     int pos, n, i;
//     printf("\nEnter a string: ");
//     scanf("%s", str);
//     printf("Enter position and no. of characters to extract: ");
//     scanf("%d %d", &pos, &n);
//     s = str;
//     t = news;
//     if( pos < 0 || pos > strlen(str))
//     {
//         printf("Improper position value");
//         exit(1);
//     }
//     if ( n < 0)
//         n = 0;
//     if ( n > strlen(str))
//         n = n - strlen(str) - 1;
//     s = s + pos;
//     for( i = 0; i < n; i++)
//     {
//         *t = *s;
//         s++;
//         t++;
//     }
//     *t = '\0';
//     printf("The substring is: %s\n", news);
//     return 0;
// }

//* Write a program that converts a string like "124" to an integer.
// #include<stdio.h>
// int main()
// {
//     char str[6];
//     int num = 0, i;
//     printf("Enter a string containing a number: ");
//     scanf("%s", str);
//     for( i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] >= 48 && str[i] <= 57)
//             num = num * 10 + (str[i] - 48);
//             else
//             {
//                 printf("Not a valid string\n");
//                 return 1;
//             }
//     }
//     printf("The number is: %d\n", num);
//     return 0;
// }

//* Write a program that generates and prints the fibonacci words of order 0 through 5. For example, f(0) = "A", f(1) = "B", f(2) = "BA",  f(3) = "BAB", f(4) = "BABA", etc;
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;
    for ( i = 1; i <= 5; i++)
    {
        strcpy (str, lastterm); // this function copies the contents of one string into another
        strcat (str, lastbutoneterm); // this function concatenates the source string at the end of the target string
        printf("%s\n", str);
        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }
    return 0;
}

