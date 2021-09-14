#include<stdio.h>
#include<conio.h>
void main()
{
	int i, x[10] = { 12,123,324,566,554,343,211,267,991,110 };
	gotoxy(10, 10);
	printf("Following is the memory map for intilized Array!");
	for (i = 0;i < 10;i++)
	{
		printf("\n variable x[%d] value %d memory address %u"i, x[i], &x[i]);
	}
	printf("\n %d", x[2]);
	printf("\n %d", x[5]);
	getch();
}