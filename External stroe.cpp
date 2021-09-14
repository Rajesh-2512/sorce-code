#include<stdio.h>
#include<conio.h>
void gc();
int a = 10;
void mian()
{
	clrscr();
	a = a + 5;
	gc();
	getch();
}
void gc()
{
	a++;
	printf("a=%d\n", a);
}