#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[25];
	clrscr();
	printf("enter your name");
	gets(name);
	strrev(name);
	printf("\n%s", name);
	getch();
}