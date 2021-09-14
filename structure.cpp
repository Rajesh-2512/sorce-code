#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	int roll - no;
	int marks;
};
void main()
{
	struct student s1;
	gotoxy(27, 27);
	printf("Enter the name,roll no and marks of student");
	scanf("%s%d", &s1.name, &s1.rollno, &s1.marks);
	gotoxy(25, 25);
	printf("%s%d%d", s1.roll - no, s1.marks);
	getch();
}