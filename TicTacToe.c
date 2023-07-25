#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int victory = 0;
    int index = 0;
    char markings[9] = {' ',' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' '};
    int user_input = 0;
    char p1 = 'X' , p2 = 'O';
    char mark = ' ';
    int turn = 0;
    while (!victory)
    {
        printf("Enter a number (or -1 to stop): ");
        scanf("%d", &user_input);
        
        if(user_input > 9)
        {
            printf("Please choose a number between 1 and 9\n");
            continue;
        }


        if (user_input == -1)
        {
            printf("Thank you for playing!\n");
            printf("Ta Ta\n");
            return 0;
        }
        
        if (!(turn%2))
        {
            mark = p1;
            turn++;
        }
        else
        {
            mark = p2;
            turn++;
        }
        if (('X' == markings[user_input - 1]) || 'O' == markings[user_input - 1])
        {
            printf("Thats not how you play the game buddy\n choose a diffrent position\n");
            turn ^= 1;
            continue;
        }
        
        
        markings[user_input - 1] = mark;
        printf(" Player %c has played %d \n", mark ,user_input);
        printf("\n");
        printf("      |      |      \n");
        printf("   %c  |   %c  |  %c  \n", markings[0],markings[1],markings[2]);
        printf("______|______|______\n");
        printf("      |      |      \n");
        printf("   %c  |   %c  |  %c  \n", markings[3],markings[4],markings[5]);
        printf("______|______|______\n");
        printf("      |      |      \n");
        printf("   %c  |   %c  |  %c  \n", markings[6],markings[7],markings[8]);
        printf("      |      |      \n");

        if (
            (markings[0] == p1 && markings[0] == markings[1] && markings[1] == markings[2]) ||
            (markings[3] == p1 && markings[3] == markings[4] && markings[4] == markings[5]) ||
            (markings[6] == p1 && markings[6] == markings[7] && markings[7] == markings[8]) ||
            (markings[0] == p1 && markings[0] == markings[4] && markings[4] == markings[8]) ||
            (markings[2] == p1 && markings[2] == markings[4] && markings[4] == markings[6]) ||
            (markings[0] == p1 && markings[0] == markings[3] && markings[3] == markings[6]) ||
            (markings[1] == p1 && markings[1] == markings[4] && markings[4] == markings[7]) ||
            (markings[2] == p1 && markings[2] == markings[5] && markings[5] == markings[8])
            )
            
        {
            printf("WOOOOOOHOOOOOOOO %c won!! GoodJob!\n",p1);
            victory = 1;
        }
        if (
            (markings[0] == p2 && markings[0] == markings[1] && markings[1] == markings[2]) ||
            (markings[3] == p2 && markings[3] == markings[4] && markings[4] == markings[5]) ||
            (markings[6] == p2 && markings[6] == markings[7] && markings[7] == markings[8]) ||
            (markings[0] == p2 && markings[0] == markings[4] && markings[4] == markings[8]) ||
            (markings[2] == p2 && markings[2] == markings[4] && markings[4] == markings[6]) ||
            (markings[0] == p2 && markings[0] == markings[3] && markings[3] == markings[6]) ||
            (markings[1] == p2 && markings[1] == markings[4] && markings[4] == markings[7]) ||
            (markings[2] == p2 && markings[2] == markings[5] && markings[5] == markings[8])
            )
            
        {
            printf("WOOOOOOHOOOOOOOO %c won!! GoodJob!\n",p2);
            victory = 1;
        }
        
        if (turn == 9)
        {
            printf("My Oh MY\n ITS A TIEEEE\n");
            victory = 1;
        }
        

        if (victory)
        {
            printf("\n\t******HOOO WEEE That Was Fun******\n");
            printf("If you want to play again\n");
            printf("Press Y\nelse press any key to exit\n");

            scanf(" %c", &mark);

            if (mark == 'Y' || mark == 'y')
            {
                for (index = 0; index < 9; index++)
                {
                    markings[index] = ' ';
                }
                victory = 0;
            }
        }
        
    }
    
    (void)argc;
    (void)argv;
    return 0;
}
