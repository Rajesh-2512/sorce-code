#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter year");
	scanf("%d", &year);
	if (year % 4 == 0)
		printf("%d is leap year", year);
	else if (year % 400 == 0)
		printf("%d is a leap year ", year);
	getch();
}