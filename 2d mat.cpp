#include<stdio.h>
#include<conio.h>
void main()
{
	int x[2][3], i, j;
	clrscr();
	gotoxy(10, 10);
	printf("Enter values for matrix 5*5!");
	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	gotoxy(15, 15);
	printf("The values entered in matrix 2*3 are!");
	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("\t%d", x[i][j]);
		}
	}
	getch();
}