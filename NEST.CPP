#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s;
clrscr();
gotoxy(10,10);
printf("Enter the valuess for a,b,c respectively");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
s=a;
else
s=c;
}
else
{
if(b<c)
s=b;
else
s=c;
}
printf("The smallest value is %d",s);
getch();
}