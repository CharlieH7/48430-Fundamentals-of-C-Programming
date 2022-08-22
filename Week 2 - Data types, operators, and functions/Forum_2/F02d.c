/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Write a program to calculate the area of a flat washer, given the outer and
inner diameters. Use a function that calculates the area of a circle.

explain:
    - function protype and definition
    - input arguments and types
    - return argument type
    - pass by value (functions use a local copy of variables)
*******************************************************************************/

#include <stdio.h>
#define PI 3.14

/* prototype */
double area_circle(double diameter);

void just_for_fun(double d);

/* main */
int main(void)
{
    /* TODO */
    double diameter_out, diameter_in;
    double area_total_washer;
    printf("enter outer and inner diameters sep. by space>");
    scanf("%lf%lf",&diameter_out, &diameter_in);
    area_total_washer = area_circle(diameter_out) - area_circle(diameter_in);
    printf("area of the flat washer is %lf\n", area_total_washer);


    printf("before: %lf\n", diameter_out);
    just_for_fun(diameter_out);
    printf("after: %lf\n", diameter_out);

    return 0;
}

/* function definition */
double area_circle(double diameter){
    /*return PI*(diameter/2)*(diameter/2)*/
    double area = PI*(diameter/2)*(diameter/2);
    return area;
}

void just_for_fun(double d){
    d = d+10;
    printf("in func: %lf\n", d);
}
