// TODO : Attempt the following questions.
//  * (B) TO uniquely identify a book of a 10 digit ISBN (International Standard Book Number) is used, the right most digit in ISBN is a checksum digit. This digit is determined from the other 9 digit using the condition that d1 + 2d2 + 3d3 + ..... + 10d10 must be a multiple of 11 ( where di denotes the ith digit from the right). The checksum digit d1 can be any value from 0 to 10: the ISBN convention is to use the value X to denote 10. write a program that receives a 10-digit integer, computes the checksum, and reports whether the ISBN number is correct or not.
//  #include<stdio.h>
//  int main()
//  {
//      char isbn[15];
//      int i, sum = 0;
//      printf("\nEnter 10 digit ISBN number : ");
//      scanf("%s",isbn); //gets_s(str) is used to read a string from the user and store it in the 'str'.
//      for( i = 0; i <= 9; i++)
//      {
//          isbn[i] -= 48; /* converting character into the numerals */
//          sum = sum + (( i + 1) * isbn[i]); /* checking the condition of the ISBN validity */
//      }
//      if( sum % 11) /* If not divisible by 11 */
//          puts("\nISBN number is wrong."); /* puts() is used to output the data of a string, it automatically append a newline at the end of the string. */
//          else
//              puts("\nISBN is valid.");
//      return 0;
//  }

//! Question (C)
// A Credit Card Number is usually a 16-digit number. A valid Credit Card number would satisfy the rule explained below with the help of a dummy credit card number - 4567 1234 5678 9129. starts with the rightmost - 1 digit and multiply every other digit by 2.
// 4 5 6 7    1 2 3 4    5 6 7 8    9 1 2 9
// 8  12      2   6     10  14      18  4
// Then subtract 9 from any number larger than 10. Thus we get 8 3 2 6 1 5 9 4. add them all up to get 38. add all other digits to get 42. sum of 38 and 42 is 80. Since 80 is divisible by 10, the credit card number is valid.
//  Write a program that receives a Credit Card Number and checks using the rule(mentioned in Let Us C book page: 272) whether the Credit Card Number is valid.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char num[20];
//     int i, sum = 0;
//     printf("\nEnter the 16 digit credit card number : ");
//     scanf("%s", num);

//     for(i = 0; i <= 15; i++) // Traversing all numbers
//     {
//         num[i] -= 48; // converting each character in numeral
//         if((i % 2)) // if the number is on right so it will directly get summed
//             sum = sum + num[i];
//         else // if number is on left, so it will first get doubled
//         {
//             num[i] *= 2;
//             if(num[i] >= 10) // if number is greater than or equal to 10 so it will subtracted from 9
//                 num[i] -= 9;
//             sum = sum + num[i];
//         }
//     }
//     if(!(sum % 10)) // if sum is divisible by 10 so number is valid
//         printf("\nNumber is valid.");
//     else
//         printf("\nNumber is not valid.");
//     _getch();
//     return 0;
// }

// W3school Exercises on Strings
// Write a program to find the length of the string without using library function
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l = 0;
    printf("Find the length of the string.\n");
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);
    while(str[l] != '\0')
    {
        l++;
    }
    printf("length of the string is : %d\n\n", l-1);
    return 0;
} */

// Write a program to separate the individual characters of string.
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[100]; // Declaring a string of size 100
    int l = 0;
    printf("Separate the individual characters of a string.\n");
    printf("Input the string: ");
    scanf("%s", str);
    while(str[l] != '\0')
    {
        printf("%c \t", str[l]);
        l++;
    }
    printf("\n");
    return 0;
}
*/

// Write a program to print individual character of string in reverse order
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int l, i;
    printf("Print individual character of string in reverse form.\n");
    printf("Input the string: ");
    scanf("%s", str);
    l = strlen(str);
    printf("\nThe characters of the string in reverse form is: \n");
    for(str[l] = '\0'; l >= 0; l--)
    {
        printf("%c\t", str[l]);
    }
    printf("\n");
}
*/

// Write a program to count the total numbers of word in a string
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int i, wrd;

       printf("\n\nCount the total number of words in a string :\n");
       printf("------------------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
       // scanf("%s", str); // scanf() is not recommended it gives errors, always try to take user input through fgets();

    i = 0;
    wrd = 1;

    // loop till end of string
    while(str[i]!='\0')
    {
        // check whether the current character is white space or new line or tab character
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd-1);
}
*/

// Write a program to compare two strings without using library functions strcmp();
/*
#include<stdio.h>
#define str_size 100
int test( char* s1, char* s2)
{
    int flag = 0;
    while(*s1 != '\0' || *s2 != '\0')
    {
        if(*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else if ((*s1 == '\0' && *s2 != '\0')
                                     || (*s1 != '\0' && *s2 == '\0')
                                     || *s1 != *s2)
        {
            flag = 1;
            break;
        }
    }
    return (flag);
}
int main(void)
{
    char str1[str_size], str2[str_size];
    int flag = 0;
    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin);
    printf("\nInput the 2nd string : ");
    fgets(str2, sizeof str2, stdin);
    printf("\nFirst String is : %s", str1);
    printf("Second String is : %s", str2);
    flag = test(str1, str2);
    if( flag == 0)
    {
        printf("\nStrings are equal.");
    }
    else if(flag == 1)
    {
        printf("\nStrings are not equal.");
    }
    return 0;
}
*/

// Write a program to count the number of alphabets, digit and special characters in a string
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define str_size 100
void main()
{
    char str[str_size];
    int alph, digit, splchar, i;
    alph = digit = splchar = i = 0;
    printf("\n\nCount total numbers of alphabets, digits and special character.\n");
    printf("Input the string: ");
    fgets(str, sizeof str, stdin);
    // check each character of string

    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alph++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            splchar++;
        }
        i++;
    }
    printf("Number of alphabet in the string is : %d\n", alph);
    printf("Number of digit in the string is : %d\n", digit);
    printf("Number of special character in the string is : %d\n", splchar - 1);
    return 0;
} */

// Write a program to copy one string to another string
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100
int main()
{
    char str1[str_size], str2[str_size];
    int i;
    printf("\n\nCopy one string into another string :\n");
    printf("-----------------------------------------\n");
    printf("Input the string : ");
    fgets(str1, sizeof str1, stdin);

    // Copies string1 to string2 character by character
    i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    // Makes sure that the string is NULL terminated
    str2[i] = '\0';

    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
}
*/

// Write a code to find total numbers of vowels and consonants in a string
// #include<stdio.h>
// #include<string.h>
// #define str_size 100
// int main()
// {
//     char str[str_size];
//     int i, len;
//     printf("Find total number of vowels and consonants in a string.\n");
//     printf("Input the string: ");
//     fgets(str, sizeof str, stdin);
//     int vowel = 0, cons = 0;
//     len = strlen(str);
//     for(i = 0; i < len; i++)
//     {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         {
//         vowel++;
//         }
//         else if
//         ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')){
//             cons++;
//         }
//     }
//     printf("\nTotal numbers of vowels in the string is: %d", vowel);
//     printf("\nTotal number of consonants in the string is: %d", cons);
//     return 0;
// }

// Write a program to find the maximum numbers of characters in a string
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100 // Declare the maximum size of the string
#define chr_no 255 // maximum number of characters to be stored
int main()
{
    char str[str_size];
    int ch_fre[chr_no];
    int i = 0, max;
    int ascii;
    printf("\nFind maximum occuring character in a string.\n");
    printf("Input the string: ");
    fgets(str, sizeof str, stdin);

    for(i = 0; i < chr_no; i++) // set frequency of all characters to 0
    {
        ch_fre[i] = 0;
    }

    // Read the frequency of each characters
    i = 0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;

        i++;
    }
    max = 0;
    for( i = 0; i < chr_no; i++)
    {
        if(i != 32)
        {
            ch_fre[i] > ch_fre[max];
            max = i;
        }
    }
    printf("The highest frequency of character '%c' appears numbers of times : %d \n\n", max, ch_fre[max]);
    return 0;
}
 */

 // Write a program to sort array in ascending order
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//   char str[100],ch;
//   int i,j,l;
  
//        printf("\n\nSort a string array in ascending order :\n");
//        printf("--------------------------------------------\n");  
//        printf("Input the string : ");
//        fgets(str, sizeof str, stdin);
//   l=strlen(str);
//   /* sorting process */
//   for(i=1;i<l;i++)
//     for(j=0;j<l-i;j++)
// 	if(str[j]>str[j+1])
// 	{
// 	  ch=str[j];
// 	  str[j] = str[j+1];
// 	  str[j+1]=ch;
// 	}
//    printf("After sorting the string appears like : \n");
//    printf("%s\n\n",str);
//   }

