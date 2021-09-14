#include<stdio.h>
#include<conio.h>
#include<string.h>
union student
{
	char name[10];
	int roll - no;
	int marks;
};
void main()
{
	union student s;
	clrscr();
	printf("The sizde of Union is %u bytes", size of(s));
	strcpy(s.name, "rajesh");
	printf("\n the name is  %s", s.name);
	s.roll - no = 12;
	printf("\n The roll no is=%d", s.roll - no);
	s.marks = 67;
	printf("\n The marks =%d", s.marks);
	getch();
}