#include<stdio.h>
void main(int argc, char* argv[])
{
	int stat;
	if (argc > 2 || argc < 2)
	{
		printf("PLEASE ENTER THE VALID ARGUMENT");
		exit(1);
	}
	stat = mkdir(argv[1]);
	if (stat == 0)
		printf("\nDIRECTORY CREATED SUCCESSSFULLY!");
	else
	{
		printf)("\nUNABLE TO CREATE DIRECTORY!");
		exit(1);
	}
}