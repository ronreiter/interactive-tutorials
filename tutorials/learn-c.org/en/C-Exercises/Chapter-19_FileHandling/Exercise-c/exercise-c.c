//* (C) Write a program that merges lines alternatively from two files and writes the results to a new file. If one has a smaller number of lines than the other the remaining lines from the lrger file should be simply copied into the target file.

#include <stdio.h>
int main()
{
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "w");
    FILE *targetFile = fopen("targetFile", "w");

    if (file1 == NULL || file2 == NULL || targetFile == NULL)
    {
        puts("Error! opening the files.\n");
        return 1;
    }
    char line1[100], line2[100];
    int linesMerged = 0;

    while (1)
    { //* the construct while(1) is a common idiom used in programming to create an infinite loop. It's a way to create a loop that continues executing its code block indefinitely. without any predefined condition to stop the loop. The loop condition is simply 1, which is always true, meaning the loop's code block will execute as long as the condition is true(which is always the case). This creates a loop that doesnot have a natural termination point based on the condition, resulting in an infinite loop.
        if (fgets(line1, sizeof(line1), file1) != NULL)
        {
            fputs(line1, targetFile);
            linesMerged++;
        }
        //        Certainly! the above three lines of code snippet performs the following steps:

        // 1. `fgets(line1, sizeof(line1), file1)`: Reads a line of text from the file `file1` and stores it in the character array `line1`, up to a maximum of `sizeof(line1)` characters.

        // 2. `!= NULL`: Compares the result of `fgets()` to check if it successfully read a line. If it successfully read a line, the result is not `NULL`.

        // 3. `fputs(line1, targetfile);`: If a line was successfully read from `file1`, it writes that line to the `targetfile`.

        // 4. `Lines++;`: Increments a counter named `Lines` to keep track of the number of lines processed.

        // In summary, this code reads a line from `file1`, checks if the read was successful, and if so, writes that line to the `targetfile`. It then increments the `Lines` counter. This code is typically used in a loop to read and write lines alternately or perform similar tasks.

        if (fgets(line2, sizeof(line2), file2) != NULL)
        {
            fputs(line2, targetFile);
            linesMerged++;
        }

        if (feof(file1) && feof(file2)) // feof() is a function in the C standard library used to check whether the end-of-file indicator associated with a file stream has been set.
        {
            break;
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(targetFile);

    printf("Merged %d lines alternatively and written to target.txt.\n", linesMerged);
    return 0;
}