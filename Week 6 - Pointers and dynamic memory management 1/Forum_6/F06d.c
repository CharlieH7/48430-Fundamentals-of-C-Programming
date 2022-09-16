/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
dynamic memory managment using pointers and stdlib.h.
write a program to allocate and deallocate memory to a double.
*******************************************************************************/

#include <stdlib.h> /*malloc, free */
#include <stdio.h> /* printf */

int main(void)
{
    double *yp=NULL;
    if(yp==NULL)
    {
        printf("initial sucessful\n");
    }
    yp = (double*)malloc(1*sizeof(double));
    if(yp==NULL)
    {
        printf("Allocation failed.\n");
        return 1;
    }
    *yp = 2.11;
    printf("*yp=%lf\n", *yp);
    printf("yp=%p\n", yp);

    free(yp);
    yp = NULL;
    
	return 0;
}
