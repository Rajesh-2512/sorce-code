#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 65, j;
	clrscr();
	printf("\n value of i=%d", j);
	j = i & 1;
	if (j == 0)
		printf("\t its first bit is off");
	else
		printf("its first bit is on ");
	getch();
}