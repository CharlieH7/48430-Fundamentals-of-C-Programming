struct player
{
    char letter;
    int age;
    double avg;
};

typedef struct player player_t;

void printPlayer(player_t p);
player_t scanPlayer (void);

#include <stdio.h>
int main(void)
{
    player_t player = scanPlayer();
    printPlayer(player);
    return(0);
}

player_t scanPlayer (void)
{
    char letter;
    int age;
    double average = 43.2;
    printf("Enter the first letter of the player name> ");
    scanf("%c", &letter);
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
