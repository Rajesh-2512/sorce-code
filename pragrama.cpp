#include<stdio.h>
#include<conio.h>
void hello();
void bye();
#pragma startup hello
#pragma exit bye
void main()
{
	delay(1000);
	gotoxy(12, 14);
	printf("\nNow i am inside main function!");
	getch();
}
void hello()
{
	gotoxy(12, 12);
	printf("\nHello i am executing before main()");
}
void bye()
{
	gotoxy(12, 16);
	printf("\n Hi,i have excuted after main()");
}