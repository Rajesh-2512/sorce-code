#include<stdio.h>
void main(int argc, char* argv[])
{
	int i;
	printf("The total number arguments passed %d", argc);
	for (i = 0;i < argc;i++)
	{
		printf("\n the argument %d=%s", i, argv[i]);
	}
}