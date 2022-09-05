/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Learn how to convert a simple flow chart to an if-else control structure. Discuss
two approaches
    - nested if-else structure
    - using logical operators
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    char road_status = 'S'; /* some char */
    double temp = 23.89; /* some double for temperature */

    /* TODO: print appropriate messages */
    if(road_status=='S')
    {
        if(temp>0)
        {
            printf("wet roads\n");
        }
        else 
        {
            printf("icy roads\n");
        }
    } 
    else 
    {
        printf("drive carefully\n");
    }

    
    return 0;
}
