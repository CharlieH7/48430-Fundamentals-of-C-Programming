#include <stdio.h>

int factorial(int n);
int main(void)
{
    int number = 0;
    printf("Enter a number> ");
    scanf("%i", &number);
    printf("%i\n", factorial(number));
    return 0;
}

int factorial(int n) 
{
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}
