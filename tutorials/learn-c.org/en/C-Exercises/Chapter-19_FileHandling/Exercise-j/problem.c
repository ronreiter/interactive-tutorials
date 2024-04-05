//* Given a text file, write a program to create another text file deleting the words "a", "the", "an" and replacing each one of them with a blank space.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *inputFile, *outputFile;
    char word[100];

    // open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    // open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error opening output file.\n");
        return 1;
    }

    // process the input file
    while (fscanf(inputFile, "%s", word) != EOF)
    {
        // first convert the word to lowercase for comparison
        char lowerWord[100];
        strcpy(lowerWord, word);
        for (int i = 0; lowerWord[i]; i++)
        {
            lowerWord[i] = tolower(lowerWord[i]);
        }
        // check if he word is "a", "the", or "an" and rest of the word is skipped
        if (strcmp(lowerWord, "a") == 0 || strcmp(lowerWord, "the") == 0 || strcmp(lowerWord, "an") == 0)
        {
            fprintf(outputFile, " ");
        }else{
            fprintf(outputFile, "%s ", word);
        }
    }

    // close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("output file created successfully.\n");

    return 0;
}