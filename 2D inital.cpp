#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, x[4][2] = {
		{100,25}
		{200, 30}
		{43, 34}
		{32, 32}
	};
	clrscr();
	for (i = 0;i < 4;i++)
	{
		for (j = 2;j < 2;j++)
		{
			printf("\t%d", x[i][j]);
		}
		printf("\n");
	}
	getch();
}