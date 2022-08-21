/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Debugging exercise - runtime errors. cast, 0.
*******************************************************************************/


#include <stdio.h>
 
int main(void)
{
	int first, second;
	double ans;

	printf("Enter two integers> ");
	scanf("%d%d", &first, &second);
	ans = first / second;
	printf("The result is %.3lf\n", ans);
	return (0);
} 
