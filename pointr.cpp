#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 10, b* p
		clrscr();
	p = &a;
	b = *p;
	gotoxy(10, 10);
	printf("\n The value of a is %d", a);
	printf("\n%d is stored at address is %u", a & b);
	printf("\n%d is stored at address is %u", *p, p);
    printf("\n%d is stored at address is %u", b & b);
	printf("\n the value of b is %d", (&b));
	getch();
}