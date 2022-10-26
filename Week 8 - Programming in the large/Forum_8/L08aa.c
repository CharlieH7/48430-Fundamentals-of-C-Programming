/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Implementation of planet structure without a header
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#define PLEN 10

struct planet{
	char name[PLEN];
	double diameter;
};

typedef struct planet planet_t;

planet_t makeplanet(char [], double);
void printplanet(planet_t);

int main(void)
{
	planet_t earth = makeplanet("Earth",12000);
	printplanet(earth);

	return 0;
}

planet_t makeplanet(char name [], double diameter)
{
	planet_t p;
	strcpy(p.name, name);
	p.diameter = diameter;
	return p;
}

void printplanet(planet_t p)
{
	printf("%s has a diameter of %.2f\n", p.name, p.diameter);
}
