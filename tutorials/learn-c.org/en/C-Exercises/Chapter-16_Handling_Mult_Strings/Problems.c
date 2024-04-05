// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char list[6][20] = {
//         "Yusuf", "Komal", "Akib", "Shadab", "Irfan", "obaid"
//     };
//     int i;
//     char *yourname[20];
//     printf("Enter your name: ");
//     // fgets(list, sizeof list, stdin);
//     scanf("%s", yourname);
//     for( i = 0; i <= 5; i++)
//     {
//         if(strcmp(&list[i][0], yourname) == 0)
//         {
//             printf("Welcome, you can enter the palace");
//             return 0; // the loop return back to the main and it will not print the below printf()
//         }
//     }
//     printf("Sorry, you are a trespasser");
//     return 0;
// }

// Exchange the position of names, "raman" to "srinivas", using an array of pointers to string
// #include<stdio.h>
// int main()
// {
//     char *names[] = {
//         "akshay", "parag", "raman",
//         "srinivas", "gopal", "rajesh"
//     };
//     char *temp;
//     printf("Original: %s %s\n", names[2], names[3]);
//     temp = names[2];
//     names[2] = names[3];
//     names[3] = temp;
//     printf("New: %s %s\n", names[2], names[3]);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char *names[6], n[50];
//     int len, i;
//     char *p;
//     for ( i = 0; i <= 5; i++)
//     {
//         printf("Enter name: ");
//         scanf("%s", n);
//         len = strlen(n);
//         p = (char * ) malloc (len + 1); // +1 for accomodating \0
//         strcpy(p, n);
//         names[i] = p;
//     }
//     for ( i = 0; i <= 5; i++)
//         printf("%s\n", names[i]);
//     return 0;
    
// }

//! Write a program to store  a few strings using an array of pointers to strings. Receive a string and check if it is present in the array.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *str[] = {
//         "We will teach you how to....",
//         "Move on mountain",
//         "Level a building",
//         "Erase the past",
//         "Make a million",
//         "...all through C!" 
//     };
//     char str1[20], *p;
//     int i;
//     printf("Enter string to be searched: ");
//     scanf("%s", str1);
//     p = NULL; // NULL :  null pointer is a special pointer value that points to nothing, or more precisely, to a memory location that is not valid for use by the program.
//     for(i = 0; i < 6; i++)
//     {
//         p = strstr(str[i], str1);
//         if(p != NULL)
//         {
//             printf("%s found in the array", str1);
//             return 0;
//         }
//         printf("%s not found in the array", str1);
//         return 0;
//     }
// } 

//! Write a  program to alphabetically sort a set of names stored using an array of pointers to strings.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *str[] = {
//         "Yusuf", "Komal", "Milind", "Shahrukh", "Salman"
//     };
//     char *t; 
//     for(i = 0; i < 5; i++)
//     {
//         for(j = i + 1; j < 5; j++)
//         {
//             if((strcmp (str[i], str[j])) > 0)
//             {
//                 t = str[i];
//                 str[i] = str[j];
//                 str[j] = t;
//             }
//         }
//     }
//     for(i = 0; i < 5; i++)
//         printf("%s\t", str[i]);
//     return 0;
// }

//! Write a program to reverse the strings stored in an array of pointers to strings:
// #include<stdio.h>
// #include<string.h>
// void xstrrev(char *ss);
// int main()
// {
//     char str[][ 35 ] = {
//         "To ere is human...",
//         "But not really mess things up...",
//         "One needs to know C!"
//     };
//     int i;
//     for(i = 0; i <= 2; i++)
//     {
//         xstrrev(str[i]);
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }

// void xstrrev( char *s)
// {
//     int l, i;
//     char *t, temp;
//     l = strlen(s);
//     t = s + l - 1;
//     for(i = 1; i <= l / 2; i++)
//     {
//         temp = *s;
//         *s = *t;
//         *t = temp;
//         s++;
//         t--;
//     }
// }

//! W3resource question practice
