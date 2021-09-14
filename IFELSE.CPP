#include<stdio.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
printf("Enter the marks of obtained by students");
scanf("%d",&marks);
if(matrks<40)
{
gotoxy(10,12);
printf("The student is failed");
}
else
{
gotoxy(10,12);
printf("The student is passed");
}
getch();
}