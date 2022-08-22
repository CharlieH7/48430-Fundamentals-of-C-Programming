/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Show how binary representation of different data types as stored in memory, show
how different data types can be printed using format specifiers.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void printbin(char*, int);

int main(void)
{
    /*
    show printf for:
        char - show 'A', 65. discuss ASCII table. e.g. 7 bell
        int - show positive and negative
        float - show exact +/-1.5 (increase decimal places), show not exact
    format specifiers:
        %c - char
        %d - int
        %f - float
        %lf- double
    */

    double a = 1.12345;
    printf("value stored in memory:\n  ");
    printf("%.35f\n",a);


    printf("memory representation:\n  ");
    printbin((char*) (&a), sizeof(a)); /* cast */
    printf("memory block used:\n  ");
    printf("%p - %p\n", &a, (void*)(&a+1)-1);
    return 0;
}

void printbin(char* n, int nb)
{
    int i;
    for (i=nb-1;i>=0;i--)
    {
        char ncopy = *(n+i);
        /* printf("\n%x - ", ncopy); */
        char binstr [9]; /* including \0 in string */
        int j;
        for(j=0;j<9;j++)
        {
            binstr[7-j] = '0' + (ncopy & 1); /* take last bit, convert to ascii */
            ncopy = ncopy >> 1; /* discard last bit, get the next */
        }
        binstr[8] = '\0';
        printf("%s ",binstr);
    }
    printf("\n");
}
