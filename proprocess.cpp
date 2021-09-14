#include<stdio.h>
#include<conio.h>
#define PLUS+
#define MINUS-
void main()
{
	int a, b, c;
	clrscr();
	gotoxy(12, 12);
	printf("Enter values for A&B");
	scanf("%d%d", &a & b);
	c = a PLUS + b;
	gotoxy(22, 22);
	printf("The addition of A and B is %d", c);
	getch();
}