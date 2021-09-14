#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int c;
	char name[10];
	clrscr();
	printf("Enter your name:");
	gets(name);
	c = strlen(name);
	printf("Length of the student[%s]is =%d", name, c);
	getch();
}