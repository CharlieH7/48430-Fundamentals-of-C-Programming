#include <stdio.h>
#include <math.h>
double area(double d1, double d2);

int main(void)
{
    double diameter1 = 0, diameter2 = 0;
    double rim_area = 0;
    printf("Please enter values for diameter1 and dismeter2: \n");
    printf("inner diameter: ");
    scanf("%lf", &diameter1);
    printf("outter diameter: ");
    scanf("%lf", &diameter2);
    rim_area = area(diameter1, diameter2); // Calling function area
    printf("The rim area is %f\n", rim_area);
    return(0);
}

// Function to calculate rim area
double area(double diameter1, double diameter2) 
{
    double outter_area = 0, inner_area = 0;
    // double pi = 3.141592657;
    outter_area = M_PI * (diameter2 / 2) * (diameter2 / 2);
    inner_area = M_PI * (diameter1 / 2) * (diameter1 / 2);
    return outter_area - inner_area;
}
