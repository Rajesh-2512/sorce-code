#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    gotoxy(10,10);
    printf("Enter the 2 values of a and b!");
    scanf("%d%d",&a,&b);
    (a>b)? printf("A is greater"):printf("B is greater");
    getch();
}