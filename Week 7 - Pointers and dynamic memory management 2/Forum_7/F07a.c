/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
dynamic arrays using pointers
*******************************************************************************/

#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */

int main(void)
{
	int* xp;
	int size;
	printf("enter size> ");
	scanf("%d", &size);
	xp = (int*) malloc(size*sizeof(int));
	if(xp==NULL)
	{
		printf("fatal memory error\n");
		return 1;
	}
	*xp = 10;
	*(xp+1) = 20;
	printf("%d %p\n", *xp, xp);
	printf("%d %p\n", *(xp+1), xp+1);

	printf("%d %d\n", xp[0], xp[1]);

	free(xp);
	xp = NULL;

	return 0;
}
