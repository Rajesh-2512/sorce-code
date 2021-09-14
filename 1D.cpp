#include<stdio.h>
#include<conio.h>
void main()
{
	float e[5];
	int i;
	clrscr();
	gotoxy(10, 10);
	printf("Enter the salary of five empolyes!");
	for (i = 0;i < 5;i++)
	{
		printf("Memory mep for the array elements!");
		for (i = 0;i < 5;i++)
		{
			printf("\n the variable e[%d]the value %f at memory address %u,e[i],&e[i]");
		}
	}
	getch();
}