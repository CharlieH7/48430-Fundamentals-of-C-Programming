/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
first write the main program that swaps two numbers (without using functions).
then write a function to swap two numbers. introduce pointers in here.
*******************************************************************************/

#include <stdio.h>

void swap(int *ap, int *bp);

int main(void)
{
	int a = 1, b = 2;	
	/* equivalence of *ap and a */
	
	printf("a=%d\n", a);
	int *ap = &a;
	*ap = *ap + 1; /* equivalent to	a = a + 1; */
	printf("a=%d\n", a);
	printf("&a=%p\n", &a);
	printf("ap=%p\n", ap);
	
	printf("in main: before swap a = %d b= %d\n",a,b);
	/* TODO: swap */
	/*
	int c = a;
	a = b;
	b = c;
	*/
	swap(&a, &b);
	printf("in main: after  swap a = %d b= %d\n",a,b);
	return 0;
}

void swap(int *ap, int *bp)
{
	printf("in func: before swap a = %d b= %d\n",*ap,*bp);
	/* TODO: swap */
	int c = *ap;
	*ap = *bp;
	*bp = c;
	printf("in func: after  swap a = %d b= %d\n",*ap,*bp);
}
