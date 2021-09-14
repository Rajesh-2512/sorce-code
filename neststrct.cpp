#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	int roll - no;
	int marks;
};
struct add
{
	char email[20];
	struct student s;
};
void main()
{
	struct add a;
	clrscr();
	gotoxy(10, 10);
	printf("%s%d%d%s", a.s.name, &a.s.roll - no, a.s.marks, a.s.email);
	printf("%s", a.s.name);
	printf("\t%d", a.s.roll - no);
	printf("\t%d", a.s.marks);
	printf("\t%d", a.email);
	getch();
}