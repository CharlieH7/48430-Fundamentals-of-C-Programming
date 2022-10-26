/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Introduce other preprocessor directives - #if, #ifdef, #ifndef, #endif

show difference between (build a bug to show)
	#if: preprocessing directive (before compiling), logical expression of
	     constants
	if : not preprocessing directive (always compiled), logical expression of
	     variable/constants

*******************************************************************************/

#include <stdio.h>

/*
#define DEBUG
*/

int main(void)
{
	int i;
	char a [] = {'a', 'b', 'c'};
	
	for (i=0; i<3; i++)
	{
		#ifdef DEBUG
			printf("i=%d\n", i);
		#endif
		printf("%c\n", a[i]);
	}

	return 0;
}
