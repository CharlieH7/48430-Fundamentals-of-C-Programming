#include <stdio.h>
#include <math.h> 

#define G 9.8 /* constant - acceleration of gravity */

void printMenu();
double flightTime(double displacement, double velocity, double angle);
double flightHeight(double velocity, double angle, double time);

int main(void)
{
    double hdisplacement, velocity, angle; 
    double time, height;

    printMenu();
    scanf("%lf%lf%lf", &hdisplacement, &velocity, &angle);

    time = flightTime(hdisplacement, velocity, angle);
    height = flightHeight(velocity, angle, time);

    printf("The flight time is %.2f seconds.\n", time);
    printf("The flight height is %.2f meters.\n", height);

    return 0;
}

void printMenu()
{
    printf("Enter the following in one line seperated by spaces.\n");
    printf("\t1. horizontal displacement in meters (m) \n");
    printf("\t2. magnitude of the velocity in meters per second (m/s)\n");
    printf("\t3. the angle of elevation in radians\n");
    printf(">");
}

double flightTime(double displacement, double velocity, double angle)
{
    return displacement / (cos(angle) * velocity);
}

double flightHeight(double velocity, double angle, double time)
{
    return (velocity * time * sin(angle)) - (0.5 * G * pow(time, 2.0));
}

