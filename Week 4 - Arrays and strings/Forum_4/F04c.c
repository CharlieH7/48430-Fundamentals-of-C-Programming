/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Sometimes arrays with variable length is required. But array size is always a 
constant. Solution: define a large array and use only a portion of it, use an
int to keep track of the used portion.
*******************************************************************************/

#include <stdio.h>

#define SENTINEL -1
#define ALEN_MAX 10

int main(void)
{
    int a[ALEN_MAX];
    int alen = 0; /* keep track of how many elements were stored in the array */

    printf("Enter no more than %d values, -1 to stop.\n", ALEN_MAX);
    /* write a loop to read values from the terminal until the SENTINEL is given
    as the input */

    int inp;
    int i;
    for (i=0, inp=1; i<ALEN_MAX && inp!=SENTINEL; i++)
    {
        printf("input>");
        scanf("%d", &inp);
        if (inp!=SENTINEL)
        {
            a[i] = inp;
            alen++;
        }
    }



    printf("Array contains: ");
    for(i=0; i<alen; i++) /* fix stopping condition */
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("alen is: %d\n", alen);
    return 0;
}
