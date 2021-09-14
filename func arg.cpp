#include<stdio.h>
#include<conio.h>
void main()
{
	float r;
	clrscr();
	printf("Enter radius of the circle!");
	scanf("%f", &r);
	area(r);
	getch();
}
void area(float r1)
{
	float area;
	area = 3.14 * r1 * r1;
	printf("The area of the circle is %f", area);
}