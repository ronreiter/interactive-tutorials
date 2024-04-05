<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <old word> <new word> <filename>\n", argv[0]);
        return 1;
    }

    const char *oldWord = argv[1];
    const char *newWord = argv[2];
    const char *filename = argv[3];

    FILE *file = fopen("exercise-c.txt", "r");
    if (file == NULL) {
        printf("Error opening the file: %s\n", filename);
        return 1;
    }

    char buffer[1000];  // Increased buffer size
    size_t oldWordLength = strlen(oldWord);

    while (fgets(buffer, sizeof(buffer), file)) {
        char *position = buffer;
        char *next;
        while ((position = strstr(position, oldWord)) != NULL) {
            next = position + oldWordLength;  // Calculate the next position
            fwrite(buffer, 1, position - buffer, stdout);
            fputs(newWord, stdout);
            position = next;  // Move to the next position
        }
        fputs(position, stdout);
    }
    
    fclose(file);

    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <old word> <new word> <filename>\n", argv[0]);
        return 1;
    }

    const char *oldWord = argv[1];
    const char *newWord = argv[2];
    const char *filename = argv[3];

    FILE *file = fopen("exercise-c.txt", "r");
    if (file == NULL) {
        printf("Error opening the file: %s\n", filename);
        return 1;
    }

    char buffer[1000];  // Increased buffer size
    size_t oldWordLength = strlen(oldWord);

    while (fgets(buffer, sizeof(buffer), file)) {
        char *position = buffer;
        char *next;
        while ((position = strstr(position, oldWord)) != NULL) {
            next = position + oldWordLength;  // Calculate the next position
            fwrite(buffer, 1, position - buffer, stdout);
            fputs(newWord, stdout);
            position = next;  // Move to the next position
        }
        fputs(position, stdout);
    }
    
    fclose(file);

    return 0;
}
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
