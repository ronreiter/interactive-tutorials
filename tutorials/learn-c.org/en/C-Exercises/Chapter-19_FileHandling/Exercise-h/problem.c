<<<<<<< HEAD
//* Given a list of names of students in a class, write a program to store the names in a file on disk. make a provision to display the nth name in the list, where n is read from the keyboard.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STUDENTS 100

int main()
{
    FILE *file;
    char studentsName[MAX_STUDENTS][20]; // assuming max name length of student
    int numStudents = 0, n;

    // Read number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Read the names of students 
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the name of %d student: ", i + 1);
        scanf("%10s", studentsName[i]);
    }

    // open the file for writing
    file = fopen("StudentsList.txt", "w");
    if(file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    

    // write the students name to the file
    for (int i = 0; i < numStudents; i++)
    {
        fprintf(file, "%s\n", studentsName[i]);
    }
    
    // closing the file
    fclose(file);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // open file for reading nth name
    file = fopen("StudentsList.txt", "r");
    if(file == NULL)
    {
        printf("Error opening the file.\n");
    }

    for (int i = 0; i <= n; i++)
    {
        fprintf(file, "%s", studentsName[i - 1]);
    }
    printf("The %dth name of the list is: %s", n, studentsName[n - 1]);

    fclose(file);

    return 0;
=======
//* Given a list of names of students in a class, write a program to store the names in a file on disk. make a provision to display the nth name in the list, where n is read from the keyboard.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STUDENTS 100

int main()
{
    FILE *file;
    char studentsName[MAX_STUDENTS][20]; // assuming max name length of student
    int numStudents = 0, n;

    // Read number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Read the names of students 
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the name of %d student: ", i + 1);
        scanf("%10s", studentsName[i]);
    }

    // open the file for writing
    file = fopen("StudentsList.txt", "w");
    if(file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    

    // write the students name to the file
    for (int i = 0; i < numStudents; i++)
    {
        fprintf(file, "%s\n", studentsName[i]);
    }
    
    // closing the file
    fclose(file);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // open file for reading nth name
    file = fopen("StudentsList.txt", "r");
    if(file == NULL)
    {
        printf("Error opening the file.\n");
    }

    for (int i = 0; i <= n; i++)
    {
        fprintf(file, "%s", studentsName[i - 1]);
    }
    printf("The %dth name of the list is: %s", n, studentsName[n - 1]);

    fclose(file);

    return 0;
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
}