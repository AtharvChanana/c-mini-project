#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    char snake, water, gun;
    printf("Choose 0 for snake, 1 for water and 2 for gun :");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);
    /*
    snake-->0
    water-->1
    gun-->2
    */
    if (player == 0 && computer == 0)
    {
        printf("Its a draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You won\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("LOST\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("LOST\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You won\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You won\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("LOST\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a draw\n");
    }
    else
    {
        printf("SOMETHING WENT WRONG\n");
    }
}
