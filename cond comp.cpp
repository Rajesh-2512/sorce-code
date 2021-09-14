#include<stdio.h>
#include<conio.h>
#define Bsalary 17000
void main()
{
	clrscr();
#if Bsalary<=15000
	printf("The employee is belongs to class C");
#elif Bsalary>15000&salary<=25000
	printf("The employee is belongs to class B ");
#else 
	printf("The employee is belongs to class A");
#endif
	getch();
}