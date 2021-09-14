#include<stdio.h>
void main(int arg c, char* argv[])
{
	int i;
	printf("The total number of arguments passed %d", arg());
	for (i = 0;i < arg;i++)
	{
		printf("\nThe argument%d=%s",i,argv[i])l
	}
}