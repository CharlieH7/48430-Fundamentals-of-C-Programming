/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:

use pointer of a pointer to allocate memory

*******************************************************************************/

#include <stdio.h> /* scanf,printf */
#include <stdlib.h> /* malloc, free, realloc */

/***********function prototypes****************/
int memory_allocation(int** d_p_p, int size);

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
            if(memory_allocation(&dynamic_array, size)==1)
            {
                printf("dynamic allocation failed\n");
                return 1;
            }
        }
		printf("ninput=%d, got %d\n",ninput, input);
	}
	printf("End summary: ninput=%d size=%d\n", ninput, size);

    free(dynamic_array);
    dynamic_array = NULL;

	return 0;
}

int memory_allocation(int** d_p_p, int size)
{
    int * tmp_p = (int*)realloc(*d_p_p, size*sizeof(int));
    if(tmp_p == NULL)
    {
        free(*d_p_p);
        return 1;
    }
    else
    {
        *d_p_p = tmp_p;
    }
    
    /*******for debug **************/
    int i;
    printf("inside the function memory_allocation\n");
    for(i=0;i<size;i++)
    {
        printf("%d ", (*d_p_p)[i]);
    }
    printf("\n");

    return 0;
}

