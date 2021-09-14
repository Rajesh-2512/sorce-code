#include<stdio.h>
#include<conio.h>
void main()
{
	char fat* ptr = (char*)OXB8000000;
	*ptr = 'c';
	*(ptr + 1) = 4;
	getch();
}