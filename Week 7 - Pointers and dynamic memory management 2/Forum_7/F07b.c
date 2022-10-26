/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
changing the size of dynamic arrays. write a program that reads ints from the
user and stores in memory as an array. program must keep collecting inputs until
it runs out of memory or the user enters 0. 
*******************************************************************************/

#include <stdio.h> /* scanf,printf */
#include <stdlib.h> /* malloc, free, realloc */

int main(void)
{
	int input;
	int ninput=0;
    int size = 5;
    int * dynamic_array=NULL;
    dynamic_array = (int *)malloc(size*sizeof(int));
    if(dynamic_array ==NULL)
    {
        printf("dynamic allocation failed\n");
        return 1;
    }

	for(scanf("%d",&input); input!=0; scanf("%d",&input))
	{
        dynamic_array[ninput] = input;
		ninput++;
        if(ninput>=size)
        {
            size += 5;
            int * tmp_p = (int*)realloc(dynamic_array, size*sizeof(int));
            if(tmp_p ==NULL)
            {
                printf("dynamic allocation failed\n");
                free(dynamic_array);
                return 1;
            }
            else
            {
                dynamic_array = tmp_p;
            }
        }
		printf("ninput=%d, got %d\n",ninput, input);
	}
	printf("End summary: ninput=%d size=%d\n", ninput, size);

    free(dynamic_array);
    dynamic_array = NULL;

	return 0;
}

