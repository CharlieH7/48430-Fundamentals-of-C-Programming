/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Arrays and pointers are related. To show:
	Array name is really the location of 0th element
	Alternative way to travel through an array
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	int a [] = {0, 1, 2};	
	printf("&a[0] is %p\n", &a[0]);
	printf("a is %p\n\n", a);
	

	printf("a+1 is %p\n", a+1);
	printf("&a[1] is %p\n", &a[1]);
	
	
	*(a+1) = 10; /* equivalent to a[1] = 10 */
	printf("*(a+1) = %d\n", *(a+1));
	printf("a[1]=%d\n", a[1]);
		
		
	return 0;
}
