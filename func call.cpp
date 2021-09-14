#include<stdio.h>
#include<conio.h>
void values(int, int);
void main()
{
	int x = 25;y = 10;
	clrscr();
	values(&x, &y);
	printf("\n The value of x is %d", x);
	printf("\n the value of y is %d", y);
	getch();
}
void values(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}