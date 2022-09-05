#include <stdio.h>
#include <math.h>

#define arrlen 5
int maximum (double arr[], int arrlength);

int main(void)
{
    int arr1[arrlen];
    double arrPower[arrlen];
    int i, power;
    printf("Enter 5 values seprated by spaces> ");
    for (i = 0; i < arrlen; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the value of n> ");
    scanf("%i", &power);
    printf("Input array is: ");
    for (i = 0; i < arrlen; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Output array is: ");
    for (i = 0; i < arrlen; i++)
    {
        arrPower[i] = pow(arr1[i], power);
    }
    for (i = 0; i < arrlen; i++)
    {
        printf("%i ", (int) arrPower[i]);
    }
    printf("\n");
    printf("The maxiumum number in the power array is %i\n", maximum (arrPower, arrlen));
    return (0);
}

int maximum (double arr[], int arrlength)
{
	int max, i;
	max = arr[0];
	for(i = 0; i < arrlength; i++)
    {
		if (arr[i] > max)
			max = arr[i];
	}
	return(max);
}
