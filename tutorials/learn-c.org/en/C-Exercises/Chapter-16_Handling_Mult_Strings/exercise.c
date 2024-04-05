//! Textbook Exercises ( Let us C )
// ( 1 ) How many bytes in memory would be occupied by the following array of pointers to strings? How many bytes would be required to store the same strings in a two-dimensional character array?
// char *mess[ ] = {
//     "Hammer and tongs", "Tooth and nail",
//     "Spit and polish", "You and C"
// };

// TODO: 
/*
In this case, the array mess is an array of 4 pointers to string literals. The size of a pointer depends on the architecture of the machine, but assuming a 64-bit architecture, each pointer would occupy 8 bytes.

Therefore, the total size occupied by the array mess in memory would be:

python
Copy code
4 * 8 = 32 bytes
To store the same strings in a two-dimensional character array, we need to calculate the size required for the array itself as well as the size required for the strings.

The size required for the two-dimensional character array can be calculated as follows:

python
Copy code
4 strings * (max length of a string + 1 for null terminator) = 4 * (16 + 1) = 68 bytes
Here, we assume that the longest string in the array is "Hammer and tongs", which has 16 characters. Adding 1 byte for the null terminator, the total size of each string would be 17 bytes.

Therefore, the total size required to store the same strings in a two-dimensional character array would be:

python
Copy code
68 bytes
Note that this calculation assumes that the strings are stored contiguously in memory, without any padding or alignment. In reality, the actual size required could be slightly larger due to these factors.
*/

// (2) Write a program to delete all the vowels from a sentence. Assume that the sentence is not more than 80 characters long.
// #include <stdio.h>
// #define MAX_LENGTH 80

// int is_vowel(char c) {
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     char sentence[MAX_LENGTH];
//     int i, len;
//     printf("Enter a sentence (not more than 80 characters):\n");
//     fgets(sentence, MAX_LENGTH, stdin);
//     len = 0;
//     while (sentence[len] != '\0') {
//         len++;
//     }
//     for (i = 0; i < len; i++) {
//         if (!is_vowel(sentence[i])) {
//             printf("%c", sentence[i]);
//         }
//     }
//     return 0;
// }

// Write a program that will read a line and delete from it all occurences of the word 'the'.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char line[1000], word[] = "the";
//     int i, j, k, n;
//     printf("Enter a line of text: ");
//     fgets(line, sizeof line, stdin);

//     n = strlen(line);

//     for( i = 0; i < n; i++)
//     {
//         if(line[i] == 't' && line[i + 1] == 'h' && line[i + 2] == 'e' && line[i + 3] == ' ' || line[i + 3] == '\n' || line[i + 3] == '\0'){
//             for(j = i; j < n; j++)
//             {
//                 line[j] = line[j + 3];
//             }
//             n -= 3; // substracting 3 from n the length of the line is updated
//             i -= 3;
//         }
//     }
//     printf("Line with 'the' removed : %s\n", line); 
//     return 0;
// }

// Write a program that stores a set of names of individuals and abbreviates the first and middle name to their first letter.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAMES 20
#define MAX_NAME_LENGTH 20

int main()
{
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int num_names = 0;
    char input[MAX_NAME_LENGTH];

    printf("Enter up to %d names(press ENTER after each name, or type 'done' to finish):\n", MAX_NAMES);

    while (num_names < MAX_NAMES)
    {
        fgets(input, MAX_NAMES, stdin);
    }
    
}