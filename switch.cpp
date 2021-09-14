#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	gotoxy(10, 10);
	printf("Enter a number 1 or 2 which will define your testing");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("im in heaven");
		break;
	case 2:
		printf("im in hell");
		break;
	default:
		printf("im still on earth");
		break;
	}
	getch();
}