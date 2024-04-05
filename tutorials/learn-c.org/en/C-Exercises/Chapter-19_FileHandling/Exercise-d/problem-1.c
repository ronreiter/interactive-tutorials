<<<<<<< HEAD
//* (D) write a program to encrypt/decrypt a file using:
//* (1) Offset cipher: In this cipher each character from the source file is offset with a fixed value and then written to the target file. For example: if character read the source file is 'A', then write a character represented by 'A' + 128 to the target file.
//* Substitution cipher: In this cipher for each character read from the source file a corresponding predetermined character is written to the target file. for example: if character 'A' is read from the source file, then a '!' would be written to the target file. Similarly, every 'B' would be substituted by '5' and so on.

#include<stdio.h>

void offsetEncrypt(FILE *source, FILE *target)
{
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch + 128, target);
    }
}

void offsetDecrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch - 128, target);
    }
}

void substitutionEncrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        char encryptedChar = '!';
        if(ch >= 'A' && ch <= 'Z'){
            encryptedChar = ch - 'A' + '!';
        }
        fputc(encryptedChar, target);
    }
}

void substitutionDecrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF){
        char decryptedChar = '!';
        if(ch >= '!' && ch <= '!' + 25){
            decryptedChar = ch - '!' + 'A';
        }
        fputc(decryptedChar, target);
    }   
}

int main()
{
    FILE *sourceFile = fopen("source.txt", "r");
    FILE *offsetEncrypted = fopen("offset_encrypted.txt", "w");
    FILE *offsetDecrypted = fopen("offset_decrypted.txt", "w");
    FILE *subEncrypted = fopen("sub_encrypted.txt", "w");
    FILE *subDecrypted = fopen("sub_decrypted.txt", "w");

    if (sourceFile == NULL || offsetDecrypted == NULL || offsetEncrypted == NULL || subDecrypted == NULL || subEncrypted == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    offsetEncrypt(sourceFile, offsetEncrypted);
    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    offsetDecrypt(offsetEncrypted, offsetDecrypted);

    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    substitutionEncrypt(sourceFile, subEncrypted);
    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    substitutionDecrypt(subEncrypted, subDecrypted);
    fclose(sourceFile);
    fclose(offsetDecrypted);
    fclose(offsetEncrypted);
    fclose(subEncrypted);
    fclose(subDecrypted);

    printf("Encryption and decryption completed.\n");

    return 0;
=======
//* (D) write a program to encrypt/decrypt a file using:
//* (1) Offset cipher: In this cipher each character from the source file is offset with a fixed value and then written to the target file. For example: if character read the source file is 'A', then write a character represented by 'A' + 128 to the target file.
//* Substitution cipher: In this cipher for each character read from the source file a corresponding predetermined character is written to the target file. for example: if character 'A' is read from the source file, then a '!' would be written to the target file. Similarly, every 'B' would be substituted by '5' and so on.

#include<stdio.h>

void offsetEncrypt(FILE *source, FILE *target)
{
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch + 128, target);
    }
}

void offsetDecrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch - 128, target);
    }
}

void substitutionEncrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        char encryptedChar = '!';
        if(ch >= 'A' && ch <= 'Z'){
            encryptedChar = ch - 'A' + '!';
        }
        fputc(encryptedChar, target);
    }
}

void substitutionDecrypt(FILE *source, FILE *target){
    int ch;
    while ((ch = fgetc(source)) != EOF){
        char decryptedChar = '!';
        if(ch >= '!' && ch <= '!' + 25){
            decryptedChar = ch - '!' + 'A';
        }
        fputc(decryptedChar, target);
    }   
}

int main()
{
    FILE *sourceFile = fopen("source.txt", "r");
    FILE *offsetEncrypted = fopen("offset_encrypted.txt", "w");
    FILE *offsetDecrypted = fopen("offset_decrypted.txt", "w");
    FILE *subEncrypted = fopen("sub_encrypted.txt", "w");
    FILE *subDecrypted = fopen("sub_decrypted.txt", "w");

    if (sourceFile == NULL || offsetDecrypted == NULL || offsetEncrypted == NULL || subDecrypted == NULL || subEncrypted == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    offsetEncrypt(sourceFile, offsetEncrypted);
    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    offsetDecrypt(offsetEncrypted, offsetDecrypted);

    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    substitutionEncrypt(sourceFile, subEncrypted);
    fseek(sourceFile, 0, SEEK_SET); // reset the file pointer
    substitutionDecrypt(subEncrypted, subDecrypted);
    fclose(sourceFile);
    fclose(offsetDecrypted);
    fclose(offsetEncrypted);
    fclose(subEncrypted);
    fclose(subDecrypted);

    printf("Encryption and decryption completed.\n");

    return 0;
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
}