#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 4; i++) 
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("* * * *\n");
    printf("* * * *\n");
    for (i = 4; i >= 1; i--) 
    {
      for(j = 1; j <= i; j++) 
      {
         printf("* ");
      }
      printf("\n");
   }
    return 0;
}
