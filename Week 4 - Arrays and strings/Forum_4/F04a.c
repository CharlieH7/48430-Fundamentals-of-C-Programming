/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
The program initialises an array and prints all elements.
To show:
Two different ways to initialise an array. Either way, the array size must be a
fixed value.
*******************************************************************************/

#include <stdio.h>
#define ALEN 5

int main(void)
{
    int i;

    /* INIT ARRAY: Option 0 
    
    int a[] = {0, 10, 20, 30, 40};
    */

    /* INIT ARRAY: Option 1
    quiz: why does the for loop start with 0? < or <= ?
    */
    /**/
    int a[ALEN];
    
    for (i=0; i<ALEN; i++)
    {
        a[i] = i*10;
    }
    

    printf("Printing array: ");
    for (i=0; i<ALEN; i++) 
    {
        printf("%03d ",a[i]);
    }
    printf("\n");

    /* what if we access a[5]? show a printf*/
    
    printf("a[5]=%d\n", a[5]);
    

    /* can i do the following in ANSI C (C90)? compile with -Wpedantic -ansi
    
    int alen = 5;
    int aa[alen];
    */

    return 0;
}