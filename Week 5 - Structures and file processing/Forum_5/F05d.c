/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
write a double to a text/binary files and read back again.
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	double d = 10.0009765625; /* double to write */
	double db = 0, dt = 0; /* for reading */
	FILE* fp = NULL; /* file stream */

	/* write data - text */
	fp = fopen("txtf", "w");
	if(fp == NULL)
	{
		printf("file error\n");
		return 1;
	}
	fprintf(fp, "%.5lf", d);
	fclose(fp);

	/* read data - text */
	fp = fopen("txtf", "r");
	if(fp == NULL)
	{
		printf("file error\n");
		return 1;
	}
	fscanf(fp, "%lf", &dt);
	fclose(fp);

	
	/*write data - binary */
	fp = fopen("binf", "wb");
	if(fp == NULL)
	{
		printf("file error\n");
		return 1;
	}
	fwrite(&d, sizeof(double), 1, fp);
	fclose(fp);
	/*read data - binary */
	fp = fopen("binf", "rb");
	if(fp == NULL)
	{
		printf("file error\n");
		return 1;
	}
	fread(&db, sizeof(double), 1, fp);
	fclose(fp);
	

	/* print */
	printf("I wrote  %.20f\n", d);
	printf("Bin read %.20f\n", db);
	printf("Txt read %.20f\n", dt);

	return 0;
}
