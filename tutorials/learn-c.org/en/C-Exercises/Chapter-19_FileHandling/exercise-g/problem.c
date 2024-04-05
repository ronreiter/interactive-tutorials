<<<<<<< HEAD
//* A hospital keeps a file of blood donors in which each record has the format: 
//* Name: 20 columns    Address: 40 columns     Age: 2 columns      Blood Type: 1 column(Type 1, 2, 3 or 4)
//* Write a program to read the file and print a list of all blood donors whose age is below 25 and whose blood type is 2.

#include <stdio.h>
#include <string.h>

struct donor {
    char name[21];
    char address[41];
    int age;
    char bloodType;
};

int main() {
    FILE *file;
    file = fopen("donors.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct donor donors[100];  // Assuming a maximum of 100 donors
    int numDonors = 0;

    // Read donor records from the file
    while (fscanf(file, "%20s %40s %2d %c", donors[numDonors].name, donors[numDonors].address, &donors[numDonors].age, &donors[numDonors].bloodType) == 4) {
        numDonors++;
    }

    fclose(file);

    // Print eligible donors (age < 25 and blood type 2)
    printf("List of eligible donors:\n");
    fflush(stdout);
    
    for (int i = 0; i < numDonors; i++) {
        if (donors[i].age < 25 && donors[i].bloodType == '2') {
            printf("Name: %s\n", donors[i].name);
            printf("Address: %s\n", donors[i].address);
            printf("Age: %d\n", donors[i].age);
            printf("Blood Type: %c\n", donors[i].bloodType);
            printf("\n");
        }
    }

    return 0;
}
=======
//* A hospital keeps a file of blood donors in which each record has the format: 
//* Name: 20 columns    Address: 40 columns     Age: 2 columns      Blood Type: 1 column(Type 1, 2, 3 or 4)
//* Write a program to read the file and print a list of all blood donors whose age is below 25 and whose blood type is 2.

#include <stdio.h>
#include <string.h>

struct donor {
    char name[21];
    char address[41];
    int age;
    char bloodType;
};

int main() {
    FILE *file;
    file = fopen("donors.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct donor donors[100];  // Assuming a maximum of 100 donors
    int numDonors = 0;

    // Read donor records from the file
    while (fscanf(file, "%20s %40s %2d %c", donors[numDonors].name, donors[numDonors].address, &donors[numDonors].age, &donors[numDonors].bloodType) == 4) {
        numDonors++;
    }

    fclose(file);

    // Print eligible donors (age < 25 and blood type 2)
    printf("List of eligible donors:\n");
    fflush(stdout);
    
    for (int i = 0; i < numDonors; i++) {
        if (donors[i].age < 25 && donors[i].bloodType == '2') {
            printf("Name: %s\n", donors[i].name);
            printf("Address: %s\n", donors[i].address);
            printf("Age: %d\n", donors[i].age);
            printf("Blood Type: %c\n", donors[i].bloodType);
            printf("\n");
        }
    }

    return 0;
}
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
