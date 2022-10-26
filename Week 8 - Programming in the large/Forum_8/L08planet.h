/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
break down L07aa.c to header file, implementation file, main file.
This file: header file. generally what goes before the main appears here, except
#include other libraries.

to show:
	how to link between files

*******************************************************************************/
#ifndef L08PLANET_H
#define L08PLANET_H

#define PLEN 10

struct planet{
	char name[PLEN];
	double diameter;
};

typedef struct planet planet_t;

planet_t makeplanet(char [], double);
void printplanet(planet_t);

#endif
