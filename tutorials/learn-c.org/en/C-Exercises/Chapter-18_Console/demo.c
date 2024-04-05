// #include<stdio.h>
// int main()
// {
//     char firstname1[ ] = "Sandy";
//     char surname1[ ] = "Malya";
//     char firstname2[ ] = "YusufJamal";
//     char surname2[ ] = "Gurubaxmi";

//     printf("%20s%20s\n", firstname1, surname1);
//     printf("%20s%20s\n", firstname2, surname2);
//     return 0;
// }

// following program shows the usage of escape sequence
// #include<stdio.h>
// int main()
// {
//     printf("Math teaches reasoning.\n Algebra & geometry\n");
//     printf("Future of learning \r is remote\n");
//     printf("You\tmust\tbe\tcrazy\tto\thate\tthis\tbook\n");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     // count chars, spaces, tabs and newlines in a file
//     FILE *fp;
//     char ch;
//     int nol = 0, not = 0, nob = 0, noc = 0;
//     fp = fopen("Examples.c", "r");
//     while(1)
//     {
//         ch = fgetc(fp);
//         if(ch == EOF)
//             break;
//         noc++;
//         if(ch ==' ')
//             nob++;
//         if(ch == '\n')
//             nol++;
//         if(ch == '\t')
//             not++;
//     }
//     fclose(fp); // we have finish reading the file now we have to close the file, this is done using the function fclose();
//     // Note that to close the file, we dont use the filename but the file pointer "fp" fclose(fp);
//     printf("Number of characters = %d\n", noc);
//     printf("Number of blanks = %d\n", nob);
//     printf("Number of tabs = %d\n", not);
//     printf("Number of lines = %d\n", nol);
//     return 0;
// }

// This program reads the contents of the file and copy them into another file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("Examples.c", "r"); // "r", searches file. If file is opened successfully fopen() loads it into memory and sets up a pointer whic points to the first character in it. If the file cannot be opened, fopen( ) returns NULL
    if(fs == NULL)
    {
        puts("Cannot open source file");
        exit(1);
    }
    ft = fopen("demo.c", "w"); // "w", If the file exists, its contents are overwritten. If the file doesn't exist, a new file is created. Returns NULL, if unable to open file
    if(ft == NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(2);
    }
    while(1)
    {
        ch = fgetc(fs);
        if(ch == EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
