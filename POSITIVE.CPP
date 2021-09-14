#include<stdio.h>
#include<conio.h>
void main()
{
int value;
clrscr();
gotoxy(10,10);
printf("Enter the value");
scanf("%d",&value);
if(value>0)
{
gotoxy(10,12);
printf("The value is positive");
}
else
{
gotoxy(10,12);
printf("The value is negative");
}
getch();
}