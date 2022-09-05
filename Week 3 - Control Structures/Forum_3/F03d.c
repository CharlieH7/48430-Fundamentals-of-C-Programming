/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Collect the user input (int inp) and print a square of * on the screen until the
input is 0 or the user has entered 5 inputs (whichever occurs first). The size
of the square should be inp x inp.

to show:
    - for loops controlled by multiple initialisation/variation clauses
    - nested for loops
*******************************************************************************/

#include <stdio.h>

void print_square(int size);

int main(void)
{
    int inp;
    int i;
    for (i=0, inp=1; i<5 && inp!=0; i++)
    {
        printf("input>");
        scanf("%d", &inp);
        print_square(inp);
    }
    return 0;
}

void print_square(int size)
{
    int i, j;
    for (j=0; j<size; j++)
    {
        for(i=0; i<size; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
