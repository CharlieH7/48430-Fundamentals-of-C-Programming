/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
define a structure of planet type. write a function to construct and initialise
a planet from input parameters. write a function to print a planet.

show - local copies of structures are passed to functions.
*******************************************************************************/
struct planet
{
	double diameter;
	int nmoons;
};

typedef struct planet planet_t;

/* function prototypes */
planet_t makePlanet(double diameter, int nmoons);
void printPlanet(planet_t p);

#include <stdio.h> /* printf */

int main(void)
{
	planet_t earth = makePlanet(12000, 1);
	printPlanet(earth);
	return 0;
}


planet_t makePlanet(double diameter, int nmoons)
{
	planet_t p;
	p.diameter = diameter;
	p.nmoons = nmoons;
	return p;
}

void printPlanet(planet_t p)
{	
	printf("diameter=%lf nmoons=%d\n", p.diameter, p.nmoons);
}
