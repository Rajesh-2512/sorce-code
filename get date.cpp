#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	struct.dos date_td;
	_dos_getdate(&d);
	clrscr();
	printf("The current year is:%d\n", d.year);
	printf("The current day is:%d\n", d.day);
	printf("The current month is:%d\n", d.month);
	getch();
}