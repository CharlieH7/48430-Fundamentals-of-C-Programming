/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
write a function to get the numerator and denominator of a valid fraction as two
integers.
A valid fraction should be in the form:
	1. numerator should be a non-zero integer
	2. denominator should be a positive integer
*******************************************************************************/

#include <stdio.h>

void scan_fraction(int *nump, int *denomp);

int main(void)
{
	int num, denom;
	/* call the function */
    scan_fraction(&num, &denom);

	printf("\n\nfraction is %d/%d", num, denom);
	return 0;
}

/******************************************************************************
function description
******************************************************************************/
void scan_fraction(int *nump, int *denomp)
{
    /*obtain a non-zero numerator*/
    do{
        printf("enter num>");
        scanf("%d", nump);
        printf("you entered %d\n", *nump);
    }while(*nump==0);
    
     /*obtain a positive denominator*/
    do{
        printf("enter denom>");
        scanf("%d", denomp);
        printf("you entered %d\n", *denomp);
    }while(*denomp<=0);
}
