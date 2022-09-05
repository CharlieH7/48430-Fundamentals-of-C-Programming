/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Illustrate how switch statements are written and executed. Emphasise the
importance of break statement. 
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    char class = 'B';

    switch (class)
    {
        case 'B' :
        case 'b' :  printf("B for ball\n");
                    break;
        case 'C' :
        case 'c' :  printf("C for C-programming\n");
        case 'D' :  printf("After C here comes D\n");
                    break;
        default  :  printf("I don't understand\n");
    }
    return 0;
}