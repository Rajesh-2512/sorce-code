#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void)
{
	char* p;
	clrscr();
	p = (char*)malloc(15 * size of(char));
	strcpy(p, "Hello world!");
	printf("\n string is [%s]Address is %u", p, p);
	p = (char*)realloc(p, 30 * size of(char));
	printf("\n string is [%s]New address is %u", p, p);
	free(p);
	getch();
}