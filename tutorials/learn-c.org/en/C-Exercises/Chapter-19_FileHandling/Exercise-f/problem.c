<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

struct date {
    int d, m, y;
};

struct employee {
    int empcode[6];
    char empname[20];
    struct date joint_date;
    float salary;
};

void sortEmployees(struct employee emp[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (emp[j].joint_date.y > emp[j + 1].joint_date.y ||
               (emp[j].joint_date.y == emp[j + 1].joint_date.y && emp[j].joint_date.m > emp[j + 1].joint_date.m) ||
               (emp[j].joint_date.y == emp[j + 1].joint_date.y && emp[j].joint_date.m == emp[j + 1].joint_date.m &&
                emp[j].joint_date.d > emp[j + 1].joint_date.d)) {
                struct employee temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    struct employee employees[10];
    for (int i = 0; i < 10; i++) {
        fscanf(inputFile, "%d %d %d %d %d %d %s %d %d %d %f",
               &employees[i].empcode[0], &employees[i].empcode[1], &employees[i].empcode[2],
               &employees[i].empcode[3], &employees[i].empcode[4], &employees[i].empcode[5],
               employees[i].empname,
               &employees[i].joint_date.d, &employees[i].joint_date.m, &employees[i].joint_date.y,
               &employees[i].salary);
    }

    sortEmployees(employees, 10);

    for (int i = 0; i < 10; i++) {
        fprintf(outputFile, "%d %d %d %d %d %d %s %d %d %d %.2f\n",
                employees[i].empcode[0], employees[i].empcode[1], employees[i].empcode[2],
                employees[i].empcode[3], employees[i].empcode[4], employees[i].empcode[5],
                employees[i].empname,
                employees[i].joint_date.d, employees[i].joint_date.m, employees[i].joint_date.y,
                employees[i].salary);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

struct date {
    int d, m, y;
};

struct employee {
    int empcode[6];
    char empname[20];
    struct date joint_date;
    float salary;
};

void sortEmployees(struct employee emp[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (emp[j].joint_date.y > emp[j + 1].joint_date.y ||
               (emp[j].joint_date.y == emp[j + 1].joint_date.y && emp[j].joint_date.m > emp[j + 1].joint_date.m) ||
               (emp[j].joint_date.y == emp[j + 1].joint_date.y && emp[j].joint_date.m == emp[j + 1].joint_date.m &&
                emp[j].joint_date.d > emp[j + 1].joint_date.d)) {
                struct employee temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    struct employee employees[10];
    for (int i = 0; i < 10; i++) {
        fscanf(inputFile, "%d %d %d %d %d %d %s %d %d %d %f",
               &employees[i].empcode[0], &employees[i].empcode[1], &employees[i].empcode[2],
               &employees[i].empcode[3], &employees[i].empcode[4], &employees[i].empcode[5],
               employees[i].empname,
               &employees[i].joint_date.d, &employees[i].joint_date.m, &employees[i].joint_date.y,
               &employees[i].salary);
    }

    sortEmployees(employees, 10);

    for (int i = 0; i < 10; i++) {
        fprintf(outputFile, "%d %d %d %d %d %d %s %d %d %d %.2f\n",
                employees[i].empcode[0], employees[i].empcode[1], employees[i].empcode[2],
                employees[i].empcode[3], employees[i].empcode[4], employees[i].empcode[5],
                employees[i].empname,
                employees[i].joint_date.d, employees[i].joint_date.m, employees[i].joint_date.y,
                employees[i].salary);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
