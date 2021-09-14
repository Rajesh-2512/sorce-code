#include<stdio.h>
#include<conio.h>
void main();
{
int x;
clrscr();
gotoxy(10,10);
printf("Enter the value for a");
scanf("%d",&x);
if(x>50)
{
gotoxy(10,12);
printf("x=%d",&x);
}
getch();
}