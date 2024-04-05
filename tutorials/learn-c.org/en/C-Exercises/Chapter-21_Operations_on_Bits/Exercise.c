<<<<<<< HEAD
//* (A) In an inter-collage competition, various sports like cricket, basketball, football, hockey, lawn tennis, table tennis, carom and chess are played between different collages. The information regarding the games won by a particular collage is stored in bit numbers 0,1,2,3,4,5,6,7 and 8 of an integer variable game. The collage that wins in 5 or more than 5 games is awarded the Champion of Champions trophy. If a number representing the bit pattern mentioned above is entered through the keyboard, then write a program to find out whether the collage won the champion of the champions trophy or not, along with the names of the games won by the collage.

// #include<stdio.h>
// int main()
// {
//     unsigned int games;
//     int gamesWon;

//     // Prompt the user to enter the bit pattern representing games won
//     printf("Enter the bit pattern (0-255) representing games won: ");  // 1+2+4+8+16+32+64+128 = 255 thats, why we are using (0-255), for 8 games.
//     scanf("%u", &games);

//     // Initialize an array to store game names
//     const char* gameNames[] = {"Cricket", "Basketball", "Football", "Hockey", "Lawn Tennis", "Table Tennis", "Carrom", "Chess"
//     };

//     // check each bit position from 0 to 8
//     for (int i = 0; i < 8; i++)
//     {
//         // check if the i-th bit is set (1) using bitwise AND
//         if((games & (1 << i)) != 0)
//         {
//             // If set, increment gamesWon and display the name of the game
//             printf("Game %s won\n", gameNames[i]);
//             gamesWon++;
//         }
//     }

//     // check if the collage is the champion of champions
//     if(gamesWon >= 5)
//     {
//         printf("Congratulations! The collage is the Champion of Champions.\n");
//     }else{
//         printf("The collage did not win the Champion of Champions title.\n");
//     }

//     return 0;
// }
//! When you choose the input value 100, the program interprets it as a binary bit pattern 1100100. Lets break down the output based on the binary representation and the games won:
// -Bit 0 is set(1): Cricket Won
// -Bit 2 is set(1): Football Won
// -BIt 6 is set(1): Carrom Won

//* (C) In order to save disk space, information about student is stored in an integer variable. Bit numbers 0 to 3 indicate whether the student is a 1st year, 2nd year, 3rd year or 4th year student respectively. Bits 4 to 7 indicate whether the student's stream is Mechanical, Chemical, Electronics or CS. Rest of the bits store room number. Such data for the 4 students is stored in the following array: int data[ ] = {273, 548, 786, 1096}; Write a program that uses this dates and displays the information about the students.

// #include <stdio.h>
// int main()
// {
//     int data[] = {273, 548, 786, 1096};
//     for (int i = 0; i < 4; i++)
//     {
//         int studentData = data[i];
//         // extract the year information (bit 0 - 3) using bitwise and operator
//         int year = studentData & 0xF; // binary of 0xF(00001111)

//         // extract the stream information(bit 4 - 7) by shifting the studentData 4 bits to the right and then applying bitwise AND with the same mask.
//         int stream = (studentData >> 4) & 0xF;

//         // extract the room number info.(bits 8 and higer) by shifting the studentData 8 bits to the right
//         int roomNumber = (studentData >> 8);
//         printf("Student %d: \n", i + 1);
//         printf("year: ");

//         switch (year)
//         {
//         case 1:
//             printf("1st year\n");
//             break;
//         case 2:
//             printf("2nd year\n");
//             break;
//         case 3:
//             printf("3rd year\n");
//             break;
//         case 4:
//             printf("4th year\n");
//             break;
        
//         default:
//             printf("Unknown year.\n");
//             break;
//         }

//         printf("Stream: ");
//         switch(stream)
//         {
//             case 1:
//                 printf("Mechanical\n");
//                 break;

//             case 2:
//                 printf("Chemical\n");
//                 break;
            
//             case 3:
//                 printf("Electronics\n");
//                 break;
            
//             case 4:
//                 printf("Computer Science\n");
//                 break;
            
//             default:
//                 printf("Unknown stream\n");
//                 break;
//         }
//         printf("Room number: %d\n", roomNumber);
//         printf("\n");
//     }

//     return 0;
// } 


//* Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function checkbits(x, p, n) which returns true if all "n" bits starting from position "p" are turned on. For Example, checkbits(x, 4, 3) will return true if bits 4, 3 and 2 are 1 in number x'

// #include<stdio.h>
// #include<math.h>

// void showbits(unsigned int);
// int checkbits(unsigned int, int, int);

// int main()
// {
//     unsigned int x = 0xF0FF;
//     int n, p;
//     int flag;

//     printf("Value of x = ");
//     showbits(x);
//     printf("\n");

//     printf("Enter position and number of bits.\n");
//     scanf("%d %d", &p, &n);

//     flag = checkbits(x, p, n);
//     if(flag == 1)
//         printf("%d bits starting from pos %d are turned on\n", n, p);
//     else
//         printf("%d bits starting from pos %d are turned off\n", n, p);

//     return 0;
// }

// void showbits(unsigned int n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for(i = 15; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }

// int checkbits(unsigned int x, int p, int n)
// {
//     int i;
//     unsigned int res;
//     int no = 0;
//     for(i = 0; i < n; i++)
//     {
//         if((( x >> (p - 1)) & 1) != 1);
//             return 0;
//         p--;
//     }
//     return 1;
// }

//* Write a program to scan an 8-bit number into a variable and check whether its 3rd, 6th and 7th bit is on.

// #include<stdio.h>
// void showbits(unsigned char);
// int main()
// {
//     unsigned char num = 0x80; // 0x80 = 10000000(Binary)
//     printf("\nValue of num = ");
//     showbits(num);
//     printf("\n");

//     unsigned int j = num & 0x08;  
//     if(j == 0)
//         printf("It's 3rd bit is off.\n");
//     else
//         printf("It's 3rd bit is on.\n");

//     j = num & 0x40;

//     if(j == 0)
//         printf("It's 6th bit is off.\n");
//     else
//         printf("It's 6th bit is on.\n");

//     j = num & 0x80;
//     if (j == 0)
//         printf("It's 7th bit is off.\n");
//     else
//         printf("It's 7th bit is on.\n");
    
//     return 0;
// }

// void showbits(unsigned char n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for(i = 7; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }
//* Output: 
// Value of num = 10000000
// It's 3rd bit is off.
// It's 6th bit is off.
// It's 7th bit is on.

//* Write a program to receive an unsigned 16-bit integer and then exchange the contents of its 2 bytes using bitwise operators.

// #include<stdio.h>
// void showbits(unsigned int);
// int main()
// {
//     unsigned int num = 0xF0F0, k = 0x0F0F;

//     printf("Value of num  = ");
//     showbits(num);
//     printf("\n");

//     num = num ^ k;  
//     k = k ^ num;
//     num = num ^ k;
//     printf("After exchanging the contents of numbers two bytes using bitwise operators the number is = ");
//     showbits(num);
//     printf("\n");

//     return 0;
// }

// void showbits(unsigned int n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for(i = 15; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }
// output: 
// Value of num  = 0000000011110000
// After exchanging the contents of numbers two bytes using bitwise operators the number is = 0000000000001111

//* write a program to receive a 8-bit number into a variable and then exchange its higher 4 bits with lower 4 bits.

// #include<stdio.h>
// void showbits(unsigned int);
// int main()
// {
//     unsigned char num = 0xf0, j;
//     printf("\nValue of num = ");
//     showbits(num);
//     printf("\n");

//     j = num >> 4;
//     printf("After exchanging numbers higher 4 bits with lower 4 bits the number is = \n");
//     showbits(j);

//     return 0;
// }

// void showbits(unsigned int n)
// {
//     int i;
//     unsigned int j, k, andmask;
//     for(i = 7; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }

//* Write a program to receive a 8-bit number into a variable and then set its odd bits to 1.

// #include<stdio.h>
// #define _BV(x) (1 << x)

// void showbits(unsigned char n);
// int main()
// {
//     unsigned char a, b, c;
//     printf("Enter a number: \n");
//     scanf("%d", &a);

//     b = _BV(1) | _BV(3) | _BV(5) | _BV(7);
//     a = a | b;
//     showbits(a);
//     printf("\n");
//     return 0;
// }
// void showbits(unsigned char n)
// {
//     int i;
//     unsigned int j, k, andmask;
//     for(i = 7; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }
=======
//* (A) In an inter-collage competition, various sports like cricket, basketball, football, hockey, lawn tennis, table tennis, carom and chess are played between different collages. The information regarding the games won by a particular collage is stored in bit numbers 0,1,2,3,4,5,6,7 and 8 of an integer variable game. The collage that wins in 5 or more than 5 games is awarded the Champion of Champions trophy. If a number representing the bit pattern mentioned above is entered through the keyboard, then write a program to find out whether the collage won the champion of the champions trophy or not, along with the names of the games won by the collage.
 
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
