//! B. Attempt the following questions
//* (a) Suppose a file contains students records with each record containing name and age of a student. Write a program to read these records and display them in sorted order by the name.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student
// {
//     char name[50];
//     int age;
// };

// //TODO: the use of 'const void *' allows the comparison function to work with the variety of data types and enables the 'qsort' function to sort arrays of any type by providing a flexible and generic way to compare elements.
// int compareStudents(const void *a, const void *b)
// {
//     return strcmp(((struct Student *)a)->name, ((struct Student *)b)->name);
// }

// int main()
// {
//     FILE *file = fopen("StudentsRecord.txt", "r");
//     if(file == NULL)
//     {
//         puts("Error! opening the file.");
//         exit(0);
//     }

//     struct Student students[100];
//     int numStudents = 0;

//     //* 'fscanf' function reads formatted data from the file, extracts the student name and age, and stores them in the students array. The loop continues until it reaches the end of the file or encounters an error.
//     while(fscanf(file, "%s %d", students[numStudents].name, &students[numStudents].age) != EOF){
//         numStudents++;
//     }

//     fclose(file);
//     qsort(students, numStudents, sizeof(struct Student), compareStudents);

//     puts("Sorted students record.\n");
//     for (int i = 0; i < numStudents; i++)
//     {
//         printf(" %s, %d\n", students[i].name, students[i].age);
//     }
    
//     return 0;
// }

// * (b) write a program to copy the contents of one file to another. while doing so replace all lowercase characters to their equivalent uppercase characters.

// #include<stdio.h>
// #include<ctype.h> // should be mentioned, for 'islower() and isupper() predefined functions
// int main()
// {
//     char sourceFileName[100];
//     char destinationFileName[100];

//     printf("Enter the source file name: ");
//     scanf("%s", sourceFileName);
//     printf("Enter the destination file name: ");
//     scanf("%s", destinationFileName);

//     FILE *sourceFile = fopen(sourceFileName, "r");
//     FILE *destinationFile = fopen(destinationFileName, "w");

//     if(sourceFile == NULL || destinationFile == NULL)
//     {
//         puts("Error! opening files.\n");
//         return 1;
//     }

//     int ch;
//     while((ch = fgetc(sourceFile)) != EOF) {
//         if(islower(ch)) {
//             ch = toupper(ch);
//         }
//         fputc(ch, destinationFile);
//     }
//     fclose(sourceFile);
//     fclose(destinationFile);
//     printf("Contents copied with lowercase characters converted to uppercase.\n");
//     return 0;
// }


