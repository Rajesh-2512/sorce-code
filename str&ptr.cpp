#include<stdio.h>
#include<conio.h>
void main()
{
	char* name[4] = {
		"john"
		"farde"
		"neo"
		"sam"
	};
	int i = 0;
	clrscr();
	for (i = 0;i < 4;i++)
	{
		printf("value of name[%d]=%s\n", i, names[i]);
	}
	getch();
}