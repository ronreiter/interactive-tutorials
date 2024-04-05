#include<stdio.h>

int main()
{

    char ch;
    printf("Enter a character from the keyboard : ");
    scanf("%c", &ch);
    
    if(ch >= 97 && ch <= 122)
    printf("You entered a lowercase letter.");
    
    if(ch > 65 && ch < 90)
    printf("You entered a uppercase letter.");
    
    if(ch > 48 && ch < 57)
    printf("Your entered a digit.");
    
    if(ch >= 0 && ch < 48 || ch > 57 && ch < 65 || ch > 90 && ch < 97 || ch > 122 )
    printf("You entered a special symbol.");    
    
    return 0;
}