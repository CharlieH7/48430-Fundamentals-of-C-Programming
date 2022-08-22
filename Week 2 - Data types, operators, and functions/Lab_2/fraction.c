#include <stdio.h>

int main(void)
{
    int numerator, denominator, remainder;
    printf("Enter the numerator and denominator separated by a space> ");
    scanf("%i", &numerator);
    scanf("%i", &denominator);
    remainder = numerator % denominator;
    if (numerator/denominator == 0) {
        printf("%i/%i = %i/%i\n", numerator, denominator, remainder, denominator);
    }
    else {
        printf("%i/%i = %i %i/%i\n", numerator, denominator, numerator/denominator, remainder, denominator);
    }
    return(0);
}
