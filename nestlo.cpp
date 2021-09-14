#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();
	for (i = 0;i<=2;i++)
	{
		for (j = 0;j <= 2;j++)
		{
			printf("The value of i%d", i);
			printf("\n");
			printf("The value of j%d", j);
			printf("\n");
		}
	}
	getch();
}