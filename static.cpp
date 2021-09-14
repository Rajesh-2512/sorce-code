#include<stdio.h>
#include<conio.h>
void sc();
void main()
{
	clrscr();
	sc();
	sc();
	sc();
	getch();
}
void sc()
{
	static int c;
	printf("\n%d", c);
	c += 5;
}