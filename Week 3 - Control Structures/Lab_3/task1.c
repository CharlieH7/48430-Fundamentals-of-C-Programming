#include <stdio.h>

int main(void)
{
    int marks;
    printf("Enter your mark> ");
    scanf("%i", &marks);
    if (marks < 0) 
    {
        printf("below 0 : Impossible, check the input again.\n");
    }
    else if (marks > 0 && marks < 50)
    {
        printf("1-49 : Z - Pity you failed, try harder next time.\n");
    }
    else if (marks >= 50 && marks < 100) 
    {
        printf("50-100  : P - Congratulations, way to go.\n");
    }
    else {
        printf("over 100: Too awesome for the class, check the input again.\n");
    }
    return 0;
}
