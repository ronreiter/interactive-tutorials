<<<<<<< HEAD
//* The information about colors is to be stored in bits of an unsigned char variable called color. Bit numbers 0 to 6, each represent 7 colors of a rainbow, i.e., bit 0 represents voilet, 1 represents indigo, and s(o on. Write a program that asks the user to enter a number and based on this number it reports which colors in the rainbow do the number represents.

// #include<stdio.h>
// #define _BV(x) (1 << x)
// void showbits(unsigned char n);

// int main()
// {
//     unsigned char color, i;
//     int c;
//     char *rbcolor[] = {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};
//     printf("\nEnter any number: ");
//     scanf("%d", &c);

//     color = (unsigned char)c;
//     printf("Colors represented are: \n");
//     for(i = 0; i <= 6; i++)
//     {
//         if((color &_BV(i)) == _BV(i))
//             printf("%s\n", rbcolor[i]);
//     }
//     return 0;
// }

//* The time field in a structure is 2 bytes long,. Distribution of different bits which account for hours, minutes and seconds is given in figure 21.6. Define a function that would receive the 2-byte time and print the equivalent hours, minutes and seconds.
// Bit-Distribution for time value
// 15   14  13  12  11  10  9   8   7   6   5   4   3   2   1   0   
// H    H   H   H   H   M   M   M   M   M   M   S   S   S   S   S

#include<stdio.h>
// Function prototype for the 'display' function
void display(unsigned short int time);

int main()
{
    unsigned short int time;

    // Prompt the user to enter a number less than 24446
    puts("Enter any number less than 24446: ");

    // Read the user input into the 'time' variable
    scanf("%hu", &time); // format specifier for unsigned short int is %hu

    // Call the 'display' function to process and display the time
    display(time);

    return 0;
}

// Function to display hours, minutes, and seconds from the input 'time'
void display(unsigned short int tm)
{
    unsigned short int hours, minutes, seconds, temp;

    // Extract hours from 'time' using bitwise right shift
    hours = tm >> 11;

    // Shift 'tm' left by 5 bits and then right by 10 bits to extract minutes
    temp = tm << 5;
    minutes = temp >> 10;

    // Shift 'tm' left by 11 bits and then right by 11 bits to extract seconds
    temp = tm << 11;
    seconds = (temp >> 11) * 2;

    // Display the original 'time' value and the extracted hours, minutes, and seconds
    printf("For Time = %hu\n", tm);
    printf("Hours = %hu\n", hours);
    printf("Minutes = %hu\n", minutes);
    printf("Seconds = %hu\n", seconds);
}

=======
//* The information about colors is to be stored in bits of an unsigned char variable called color. Bit numbers 0 to 6, each represent 7 colors of a rainbow, i.e., bit 0 represents voilet, 1 represents indigo, and s(o on. Write a program that asks the user to enter a number and based on this number it reports which colors in the rainbow do the number represents.

// #include<stdio.h>
// #define _BV(x) (1 << x)
// void showbits(unsigned char n);

// int main()
// {
//     unsigned char color, i;
//     int c;
//     char *rbcolor[] = {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};
//     printf("\nEnter any number: ");
//     scanf("%d", &c);

//     color = (unsigned char)c;
//     printf("Colors represented are: \n");
//     for(i = 0; i <= 6; i++)
//     {
//         if((color &_BV(i)) == _BV(i))
//             printf("%s\n", rbcolor[i]);
//     }
//     return 0;
// }

//* The time field in a structure is 2 bytes long,. Distribution of different bits which account for hours, minutes and seconds is given in figure 21.6. Define a function that would receive the 2-byte time and print the equivalent hours, minutes and seconds.
// Bit-Distribution for time value
// 15   14  13  12  11  10  9   8   7   6   5   4   3   2   1   0   
// H    H   H   H   H   M   M   M   M   M   M   S   S   S   S   S

#include<stdio.h>
// Function prototype for the 'display' function
void display(unsigned short int time);

int main()
{
    unsigned short int time;

    // Prompt the user to enter a number less than 24446
    puts("Enter any number less than 24446: ");

    // Read the user input into the 'time' variable
    scanf("%hu", &time); // format specifier for unsigned short int is %hu

    // Call the 'display' function to process and display the time
    display(time);

    return 0;
}

// Function to display hours, minutes, and seconds from the input 'time'
void display(unsigned short int tm)
{
    unsigned short int hours, minutes, seconds, temp;

    // Extract hours from 'time' using bitwise right shift
    hours = tm >> 11;

    // Shift 'tm' left by 5 bits and then right by 10 bits to extract minutes
    temp = tm << 5;
    minutes = temp >> 10;

    // Shift 'tm' left by 11 bits and then right by 11 bits to extract seconds
    temp = tm << 11;
    seconds = (temp >> 11) * 2;

    // Display the original 'time' value and the extracted hours, minutes, and seconds
    printf("For Time = %hu\n", tm);
    printf("Hours = %hu\n", hours);
    printf("Minutes = %hu\n", minutes);
    printf("Seconds = %hu\n", seconds);
}

>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
