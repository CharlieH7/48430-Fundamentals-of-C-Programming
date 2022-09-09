struct player
{
    char letter;
    int age;
    double avg;
};

typedef struct player player_t;

void printPlayer(player_t p);
player_t scanPlayer (void);
int savePlayerName(player_t p, char filename[]);
char readPlayerName(player_t p, char filename[]);

#include <stdio.h>
int main(void)
{
    player_t player = scanPlayer();
    // printPlayer(player);
    char *filename = "test.txt";
    savePlayerName(player, filename);
    printf("%c\n", readPlayerName(player, filename));
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

int savePlayerName(player_t p, char filename[])
{
    // open the file for writing
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return 1;
    }
    // write to the text file
    fwrite(&p, sizeof(struct player), 1, fp);
    // close the file
    fclose(fp);
    return 0;
}

char readPlayerName(player_t p, char filename[])
{
    FILE *fp = fopen(filename, "r");
	if(fp == NULL)
	{
		printf("file error\n");
		return 1;
    }
    // read file contents till end of file
    while(fread(&p, sizeof(struct player), 1, fp))
        printf ("%c, %i, %lf\n", p.letter,
        p.age, p.avg);
	fclose(fp);
}

