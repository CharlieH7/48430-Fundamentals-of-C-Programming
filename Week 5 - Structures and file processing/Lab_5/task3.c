struct player
{
    char letter;
    int age;
    double avg;
};

typedef struct player player_t;

void printPlayer(player_t p);
player_t scanPlayer (void);
int compAB (player_t playerA, player_t playerB);

#include <stdio.h>
int main(void)
{
    player_t playerA = scanPlayer();
    printPlayer(playerA);
    player_t playerB = scanPlayer();
    printf("%i\n", compAB(playerA, playerB));
    return(0);
}

player_t scanPlayer (void)
{
    char letter;
    int age;
    double average;
    printf("Enter the first letter of the player name> ");
    scanf(" %c", &letter);
    printf("Enter the age> ");
    scanf("%i", &age);
    printf("Enter the batting average> ");
    scanf("%le", &average);
    player_t player1 = {letter, age, average};
    return player1;
}

void printPlayer(player_t p)
{
    printf("%c, %i, %.2f\n", p.letter, p.age, p.avg);
}

int compAB (player_t playerA, player_t playerB)
{
    if (playerA.avg - playerB.avg > 10)
    {
        return 1;
    }
    else if ((playerA.avg - playerB.avg <= 10 && playerB.age - playerA.age > 15) || (playerB.avg - playerA.avg <= 10 && playerB.age - playerA.age > 15))
    {
        return -1;
    }
    return 0;
}