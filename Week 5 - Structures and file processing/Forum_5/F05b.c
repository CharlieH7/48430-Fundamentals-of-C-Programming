/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
implement an array of structures and write a function to check if any two given
structures are identical.
*******************************************************************************/
#include <stdio.h>

struct planet
{
	double diameter;
	int nmoons;
};

typedef struct planet planet_t;

/* function prototypes */
planet_t makePlanet(double diameter, int nmoons);
void printPlanet(planet_t p);

void printPlanetlist(planet_t planetlist[], int listLen);
int isequal(planet_t p1, planet_t p2);

int main(void)
{
	planet_t planetArray[3];
	planetArray[0] = makePlanet(12000, 1);
	planetArray[1] = makePlanet(12000, 1);
	planetArray[2] = makePlanet(10000, 1);

	printPlanetlist(planetArray, 3);
	
	if(isequal(planetArray[0], planetArray[1]))
	{
		printf("planets are identical\n");
	}
	else
	{
		printf("planets are not identical\n");
	}
	return 0;
}


int isequal(planet_t p1, planet_t p2)
{
	return p1.diameter == p2.diameter && p1.nmoons == p2.nmoons;
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

void printPlanetlist(planet_t planetlist[], int listLen)
{
	int iter;
	for(iter=0;iter<listLen;iter++)
	{
		printf("planetlist[%d]:\t", iter);
		printPlanet(planetlist[iter]);
	}
}

