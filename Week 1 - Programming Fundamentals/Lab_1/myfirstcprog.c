#include <stdio.h>
#define FLUID_OUNCES 0.033814

int main(void) 
{
	double milliliter;
	double ounces;

	printf("This program converts from ounces to milliliters. \n");
	printf("Enter the volume in ounces>");
	scanf("%lf", &ounces);

	milliliter = ounces / FLUID_OUNCES;

	printf("%.2lf ounces = %.2lf milliliters\n", ounces, milliliter);
	return(0);
}
