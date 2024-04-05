<<<<<<< HEAD
//* (A) How will you use the program given below to perform the following operations?
// 1 - copy the contents of one file to another
// 2 - create a new file and add some text to it.
// 3 - Display the contents of an existing file.
// #include<stdio.h>
// int main()
// {
//     char ch, str[10];
//     while ((ch = fgetc(stdin)) != -1)
//     {
//         fputc(ch, stdout);
//     }
//     return 0;
// }

#include<stdio.h>

int main()
{
    char ch;
    int choice;

    printf("Select an operation: \n");
    printf("1 - Copy contents of one file to another\n");
    printf("2 - Create a new file and add some text to it\n");
    printf("3 - Display the contents of an existing file\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // copy contents of one file to another
            {
                FILE *source, *destination;
                source = fopen("source.txt", "r");
                destination = fopen("destination.txt", "w");
                if (source == NULL || destination == NULL)
                {
                    printf("Error opening files.\n");
                    return 1;
                }
                while((ch = fgetc(source)) != EOF)
                {
                    fputc(ch, destination);
                }
                fclose(source);
                fclose(destination);
            }
            break;

        case 2:
        // Create a new file and add some text to it.
        {
            FILE *newFile;
            newFile = fopen("newfile.txt", "w");
            if(newFile == NULL)
            {
                printf("Error opening file.\n");
                return 1;
            }
            fprintf(newFile, "This is some text which I write in this file.");
            fclose(newFile);
        }  
            break;

        case 3:
        // Display the contents of an existing file
        {
            FILE *existingFile;
            existingFile = fopen("existing_file.txt", "r");
            if(existingFile == NULL){
                printf("Error opening file.\n");
                return 1;
            }
            while ((ch = getc(existingFile)) != EOF)
            {
                putchar(ch);
            }
            fclose(existingFile);
        }
            break;

        default:
            printf("Enter a valid option: ");
    }

    return 0;
}
=======
//* (A) How will you use the program given below to perform the following operations?
// 1 - copy the contents of one file to another
// 2 - create a new file and add some text to it.
// 3 - Display the contents of an existing file.
// #include<stdio.h>
// int main()
// {
//     char ch, str[10];
//     while ((ch = fgetc(stdin)) != -1)
//     {
//         fputc(ch, stdout);
//     }
//     return 0;
// }

#include<stdio.h>

int main()
{
    char ch;
    int choice;

    printf("Select an operation: \n");
    printf("1 - Copy contents of one file to another\n");
    printf("2 - Create a new file and add some text to it\n");
    printf("3 - Display the contents of an existing file\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // copy contents of one file to another
            {
                FILE *source, *destination;
                source = fopen("source.txt", "r");
                destination = fopen("destination.txt", "w");
                if (source == NULL || destination == NULL)
                {
                    printf("Error opening files.\n");
                    return 1;
                }
                while((ch = fgetc(source)) != EOF)
                {
                    fputc(ch, destination);
                }
                fclose(source);
                fclose(destination);
            }
            break;

        case 2:
        // Create a new file and add some text to it.
        {
            FILE *newFile;
            newFile = fopen("newfile.txt", "w");
            if(newFile == NULL)
            {
                printf("Error opening file.\n");
                return 1;
            }
            fprintf(newFile, "This is some text which I write in this file.");
            fclose(newFile);
        }  
            break;

        case 3:
        // Display the contents of an existing file
        {
            FILE *existingFile;
            existingFile = fopen("existing_file.txt", "r");
            if(existingFile == NULL){
                printf("Error opening file.\n");
                return 1;
            }
            while ((ch = getc(existingFile)) != EOF)
            {
                putchar(ch);
            }
            fclose(existingFile);
        }
            break;

        default:
            printf("Enter a valid option: ");
    }

    return 0;
}
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
