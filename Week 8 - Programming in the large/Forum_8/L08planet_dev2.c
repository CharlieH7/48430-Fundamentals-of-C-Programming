/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
break down L07aa.c to header file, implementation file, main file.
This file: implementation file. implement all functions related to the header.
in addition to that #include all other libraries here.

to show:
	how to link between files.

*******************************************************************************/

#include "L08planet.h"
#include <stdio.h> /* printf */

void printplanet(planet_t p)
{
	printf("%s has a diameter of %.2f\n", p.name, p.diameter);
}
