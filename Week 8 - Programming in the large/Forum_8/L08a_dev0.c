/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:

break down L07aa.c to header file, implementation file, main file.
This file: main file. contains the main function.

To do:
	how to link between files
	include header as ""
	printplanet in header file
	show how to compile
	show conditional compilation using macros - #ifdef
	show double inclusion of <stdio.h> and "planet.h"
*******************************************************************************/

#include "L08planet.h"

int main(void)
{
	
	planet_t earth = makeplanet("Earth",12000);
	printplanet(earth);

	return 0;
}


