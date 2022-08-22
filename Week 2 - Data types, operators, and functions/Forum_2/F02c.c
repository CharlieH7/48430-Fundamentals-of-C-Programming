/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Program to calculate square root of a number and display on the terminal. Go
through functions predefined in math.h and learn to use it.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
    /* TODO: complete */
    double inputnum;
    double outputnum;
    printf("input number>");
    scanf("%lf", &inputnum);
    outputnum = sqrt(inputnum);
    printf("sqrt(%lf)=%lf\n", inputnum, outputnum);

    
    return 0;
}
