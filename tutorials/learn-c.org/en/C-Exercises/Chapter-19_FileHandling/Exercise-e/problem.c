<<<<<<< HEAD
//* In the file 'CUSTOMER.DAT' there are 10 records with the following structure: 
// struct customer
// {
//  int accno;
// char name[30];
// float balance;
// };
// In another file 'TRANSACTION.DAT' there are several records with the following structure: 
// struct trans
// {
// int accno;
// char trans_type;
// float amount;
// };
// The element trans_type contains D/W indicating deposit or withdrawal of amount. Write a C program to update 'CUSTOMER.DAT' by adding amount to balance for the corresponding accno. Similarly, if trans_type is 'W' then substract the amount from the balance. However while substracting the amount ensure that the amount should not get overdrawn, i.e; at least 100 Rs. should remain in the account.

#include<stdio.h>
struct customer {
    int accno;
    char name[30];
    float balance;
};

struct trans {
    int accno;
    char trans_type;
    float amount;
};

int main()
{
    FILE *customerFile = fopen("CUSTOMER.dat", "r+");
    FILE *transactionFile = fopen("TRANSACTION.dat", "r");

    if(customerFile == NULL || transactionFile == NULL)
    {
        puts("Error opening files.\n");
        return 1;
    }
     struct customer cust;
     struct trans tr;

     while (fread(&tr, sizeof(struct trans), 1, transactionFile) == 1)
     {
        fseek(customerFile, (tr.accno - 1) * sizeof(struct customer), SEEK_SET);
        fread(&cust, sizeof(struct customer), 1, customerFile);

        if(tr.trans_type == 'D'){
            cust.balance += tr.amount;
        } else if (tr.trans_type == 'W' && cust.balance - tr.amount >= 100)
        {
            cust.balance -= tr.amount;
        }

        fseek(customerFile, (tr.accno - 1) * sizeof(struct customer), SEEK_SET);
        fwrite(&cust, sizeof(struct customer), 1, customerFile);
     }

     fclose(customerFile);
     fclose(transactionFile);

     puts("Account updated successfully.\n");
    return 0;
=======
//* In the file 'CUSTOMER.DAT' there are 10 records with the following structure: 
// struct customer
// {
//  int accno;
// char name[30];
// float balance;
// };
// In another file 'TRANSACTION.DAT' there are several records with the following structure: 
// struct trans
// {
// int accno;
// char trans_type;
// float amount;
// };
// The element trans_type contains D/W indicating deposit or withdrawal of amount. Write a C program to update 'CUSTOMER.DAT' by adding amount to balance for the corresponding accno. Similarly, if trans_type is 'W' then substract the amount from the balance. However while substracting the amount ensure that the amount should not get overdrawn, i.e; at least 100 Rs. should remain in the account.

#include<stdio.h>
struct customer {
    int accno;
    char name[30];
    float balance;
};

struct trans {
    int accno;
    char trans_type;
    float amount;
};

int main()
{
    FILE *customerFile = fopen("CUSTOMER.dat", "r+");
    FILE *transactionFile = fopen("TRANSACTION.dat", "r");

    if(customerFile == NULL || transactionFile == NULL)
    {
        puts("Error opening files.\n");
        return 1;
    }
     struct customer cust;
     struct trans tr;

     while (fread(&tr, sizeof(struct trans), 1, transactionFile) == 1)
     {
        fseek(customerFile, (tr.accno - 1) * sizeof(struct customer), SEEK_SET);
        fread(&cust, sizeof(struct customer), 1, customerFile);

        if(tr.trans_type == 'D'){
            cust.balance += tr.amount;
        } else if (tr.trans_type == 'W' && cust.balance - tr.amount >= 100)
        {
            cust.balance -= tr.amount;
        }

        fseek(customerFile, (tr.accno - 1) * sizeof(struct customer), SEEK_SET);
        fwrite(&cust, sizeof(struct customer), 1, customerFile);
     }

     fclose(customerFile);
     fclose(transactionFile);

     puts("Account updated successfully.\n");
    return 0;
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
}