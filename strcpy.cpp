#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[10] = "hello";
	char name2[15];
	clrscr();
	gotoxy(10, 10);
	printf("string at name1 is %s", name1);
	gotoxy(15, 15);
	puts("Enter new string");
	gets("name2");
	strcpy(name1, name2);
	printf("\nafter using string copy function");
	printf("\n new string at name1 is %s", name1);
	getch();
}