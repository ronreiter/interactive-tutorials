<<<<<<< HEAD
//* Assume that a master file contains two fields- roll number and name of the student. At the end of the year, a set of students join the class and another set leaves. A transaction file contains the roll numbers and an appropriate code to add or delete a student.
//* Write a program to create another file that contains the updated list of names and roll numbers. Assume that the Master file and the transaction file are arranged in ascending order by roll numbers. The updated should also be in ascending order by roll numbers.

#include <stdio.h>
#include <stdlib.h>

typedef struct  // Without 'typedef', you would have to use the 'struct' keyword everytime you declare a variable of the structure type: struct Student master_data;
// with 'typedef', you can provide an alias for the structure, making it easier to use. like: Student master_data;
{
    int roll_no;
    char name[20];
} Student;
int main()
{
    FILE *MasterFile, *TransactionFile, *UpdatedFile;
    Student master_data, transaction_data;

    // open the master file for reading
    MasterFile = fopen("master_file.txt", "r");
    if (MasterFile == NULL)
    {
        printf("Error opening the Master File.\n");
        return 1;
    }

    // open the transaction file for reading
    TransactionFile = fopen("transaction_file.txt", "r");
    if (TransactionFile == NULL)
    {
        printf("Error opening the Transaction File.\n");
        return 1;
    }

    // open the updated file for writing
    UpdatedFile = fopen("updated_file.txt", "w");
    if (UpdatedFile == NULL)
    {
        printf("Error opening the updated file.\n");
        return 1;
    }

    // Read the first record from master and transaction files
    int resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
    int resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);

    // process the files
    while (resultMaster != EOF && resultTransaction != EOF)
    {
        if (transaction_data.roll_no < master_data.roll_no)
        {
            fprintf(UpdatedFile, "%d %s\n", transaction_data.roll_no, "Deleted");
            resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);
        }
        else if (transaction_data.roll_no > master_data.roll_no)
        {
            fprintf(UpdatedFile, "%d %s\n", master_data.roll_no, master_data.name);
            resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
        }
        else
        {
            fscanf(MasterFile, "%s", master_data.name); // consume the name from master file
            resultMaster = fscanf(MasterFile, "%d", &master_data.roll_no);
            resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);
        }
    }

    // process remaining records in master file, if any
    while (resultMaster != EOF)
    {
        fprintf(UpdatedFile, "%d %s\n", master_data.roll_no, master_data.name);

        resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
    }

    // close the files
    fclose(MasterFile);
    fclose(TransactionFile);
    fclose(UpdatedFile);

    printf("Updated file created successfully.\n");

    return 0;
=======
//* Assume that a master file contains two fields- roll number and name of the student. At the end of the year, a set of students join the class and another set leaves. A transaction file contains the roll numbers and an appropriate code to add or delete a student.
//* Write a program to create another file that contains the updated list of names and roll numbers. Assume that the Master file and the transaction file are arranged in ascending order by roll numbers. The updated should also be in ascending order by roll numbers.

#include <stdio.h>
#include <stdlib.h>

typedef struct  // Without 'typedef', you would have to use the 'struct' keyword everytime you declare a variable of the structure type: struct Student master_data;
// with 'typedef', you can provide an alias for the structure, making it easier to use. like: Student master_data;
{
    int roll_no;
    char name[20];
} Student;
int main()
{
    FILE *MasterFile, *TransactionFile, *UpdatedFile;
    Student master_data, transaction_data;

    // open the master file for reading
    MasterFile = fopen("master_file.txt", "r");
    if (MasterFile == NULL)
    {
        printf("Error opening the Master File.\n");
        return 1;
    }

    // open the transaction file for reading
    TransactionFile = fopen("transaction_file.txt", "r");
    if (TransactionFile == NULL)
    {
        printf("Error opening the Transaction File.\n");
        return 1;
    }

    // open the updated file for writing
    UpdatedFile = fopen("updated_file.txt", "w");
    if (UpdatedFile == NULL)
    {
        printf("Error opening the updated file.\n");
        return 1;
    }

    // Read the first record from master and transaction files
    int resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
    int resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);

    // process the files
    while (resultMaster != EOF && resultTransaction != EOF)
    {
        if (transaction_data.roll_no < master_data.roll_no)
        {
            fprintf(UpdatedFile, "%d %s\n", transaction_data.roll_no, "Deleted");
            resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);
        }
        else if (transaction_data.roll_no > master_data.roll_no)
        {
            fprintf(UpdatedFile, "%d %s\n", master_data.roll_no, master_data.name);
            resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
        }
        else
        {
            fscanf(MasterFile, "%s", master_data.name); // consume the name from master file
            resultMaster = fscanf(MasterFile, "%d", &master_data.roll_no);
            resultTransaction = fscanf(TransactionFile, "%d", &transaction_data.roll_no);
        }
    }

    // process remaining records in master file, if any
    while (resultMaster != EOF)
    {
        fprintf(UpdatedFile, "%d %s\n", master_data.roll_no, master_data.name);

        resultMaster = fscanf(MasterFile, "%d %s", &master_data.roll_no, master_data.name);
    }

    // close the files
    fclose(MasterFile);
    fclose(TransactionFile);
    fclose(UpdatedFile);

    printf("Updated file created successfully.\n");

    return 0;
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
}