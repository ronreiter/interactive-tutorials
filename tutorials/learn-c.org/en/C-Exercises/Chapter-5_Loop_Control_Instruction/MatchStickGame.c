#include <stdio.h>
int main()
{
    int match_sticks = 21;
    int user_choice, computer_choice;

    while (match_sticks >= 1)
    {
        printf("Total Matchsticks left : %d\n", match_sticks);
        printf("Pick up the matchstick between ( 1 to 4)\n");
        scanf("%d", &user_choice);

        if (user_choice >= 4)
        {
            printf("Invalid Entry");
            break;
        }

        // for computer choice we are taking maximum value by which, we can get the max possible value of sticks which is 5.

        computer_choice = 5 - user_choice;

        // with the help of this code we will take only 4 rounds to decide that user looses the match.

        printf("computer picks up the %d matchsticks\n", computer_choice);

        match_sticks = match_sticks - user_choice - computer_choice;

        if (match_sticks == 1)
        {
            printf("You have been lost via computer.");
        }
    }
    return 0;
}