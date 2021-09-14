#include<stdio.h>
#include<conio.h>
void hello()
void main()
{
	clrscr();
	gotoxy(25, 25);
	printf("iam calling the function hello");
	hello();
	getch();
}
void hello()
{
	printf("hello world i am function");
}