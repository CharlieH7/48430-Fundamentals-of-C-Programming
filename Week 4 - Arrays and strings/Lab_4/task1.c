#include <stdio.h>

#define ARRAYLEN 5

int main(void) 
{
    int num[ARRAYLEN];
    int i;
    printf("Enter 5 values separated by spaces> ");
    for(i = 0; i < ARRAYLEN; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Input array is: ");
    for (i = 0; i < ARRAYLEN; i++) 
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return(0);
}
