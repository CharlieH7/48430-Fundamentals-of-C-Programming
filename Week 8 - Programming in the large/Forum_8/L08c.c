/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
to show:
	define a macro with parameters (looks like a function, but NOT)

*******************************************************************************/

#include <stdio.h>

#define SQUARE(n) (n)*(n) /* fix */
#define PRODUCT(n,m) (n)*(m) /* fix */

int main(void)
{
	int a = PRODUCT(5,4);  /* (5)*(4) = 20 */
	printf("%d\n",a);
	return 0;
}
