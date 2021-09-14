#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[30], s2[30];
	int c;
	clrscr();
	printf("Enter first string");
	gets(s1);
	printf("Ennter the second string");
	gets(s2);
	c = strcmp(s1, s2);
	if (c == 0)
		printf("The string are equal");
	else
		printf("The string are not equal");
	getch();
}