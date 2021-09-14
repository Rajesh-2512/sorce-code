#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
gotoxy(10,10);
printf("Enter value for a and b respectively");
scanf("%d%d",&a,&b);
if(a==b)
{
gotoxy(10,12);
printf("Both A and B are Equal");
}
else
if(a<b)
{
gotoxy(10,12);
printf("B is greater");
}
else
{
gotoxy(10,12);
printf("A is greater");
}
getch();
}