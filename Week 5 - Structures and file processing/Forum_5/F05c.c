/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
show that printf and scanf are writing/reading files
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	printf("Hello World printf\n");
	fprintf(stdout, "Helo world fprintf\n");
	
	/*
	int x,y;
	scanf("%d", &x);
	fscanf(stdin, "%d", &y);
	printf("scanf x=%d\n", x);
	printf("fscanf y=%d\n", y);
	*/

	
	char str[11];
	char ch;
	int iter;
	for(ch=fgetc(stdin), iter=0; ch!='\n' && iter<10; ch=fgetc(stdin))
	{
		str[iter++] = ch;
	}
	str[iter]='\0';
	printf("%s\n", str);
	
	return 0;
}
