//* problem (19.1) Write a program to read a file and display its contents along with line numbers before each line.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp;
//     char ch, source[67]; // maximum path length for some OS is 66 chars
//     int count = 1;
//     printf("\nEnter file name: ");
//     scanf("%s", source);
//     fp = fopen(source, "r");
//     if(fp = NULL)
//     {
//         puts("Unable to open the file.");
//         exit(0);
//     }
//     printf("\n%3d:", count);
//     while ((ch = getc(fp) != EOF))
//     {
//         if(ch == '\n')
//         {
//         count++;
//         printf("\n%3d:", count);
//         }
//         else
//             printf("%c", ch);
//     }
//     fclose(fp);

//     return 0;

// }

//*Problem(19.2) Write a program to append the contents of one file at the end of another.
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main()
// {
//     FILE *fs, *ft;
//     char source[67], target[67], str[80];
//     puts("Enter source file name: ");
//     gets(source);
//     puts("Enter target file name: ");
//     gets(target);
//     fs = fopen(source, "r");
//     if(fs == NULL)
//     {
//         puts("Unable to open source file.\n");
//         exit (0);
//     }
//     ft = fopen(target, "a");
//     if(ft == NULL)
//     {
//         fclose(fs);
//         puts("Unable to open target file.\n");
//         exit(0);
//     }
//     while(fgets(str, 79, fs) != NULL)
//         fputs(str, ft);
//     printf("Appending file completed.\n");
//     fclose(fs);
//     fclose(ft);

//     return 0;
// }

