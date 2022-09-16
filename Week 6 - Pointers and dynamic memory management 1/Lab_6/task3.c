struct player {
    char letter;
    int age;
};
typedef struct player player_t;

#include <stdio.h>
#include <stdlib.h>
void increment(player_t *p);

int main(void)
{
    //declaring pointer
    player_t *p;
    //allocating memory
    p = (player_t *)malloc(sizeof(player_t));
    p->letter = 'C';
    p->age = 20;
    printf("%c %d\n", p->letter, p->age);
    increment(p);
    printf("%c %d\n", p->letter, p->age);
    free(p);
    return 0;
}

void increment(player_t *p)
{
    p->age = p->age+1;//incrementing age by1
}
