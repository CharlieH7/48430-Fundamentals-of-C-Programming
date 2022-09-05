/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
Write a conditional statement to print a message accoridng to the value of a
variable.
  - Illustrate the difference between = and ==.
  - scope of variables defined within compound statements. variables can be
    accessed anywhere between {  }, after they have been declared.
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int a=3;
    if(a==1)
    {
        printf("inside the first code block\n"); 
    }
    else if(a==2)
    {
        printf("inside the second code block\n");      
    }
    else if(a==3)
    {
        int b = -5;
        printf("b=%d\n", b);
        printf("inside the third code block\n");  
    }
    else
    {
       printf("inside the last code block\n"); 
    }

    {
      int c=100;
      printf("c=%d\n", c);  
    }

    return 0;
}
