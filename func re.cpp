#include<stdio.h>
#include<conio.h>
float area(float);
void main()
{
	float r, result;
	clrscr();
	printf("Enter the radius of circle");
	scanf("%f", &r);
	result = area(r);
	printf("The area of circle is %f", result);
	getch();
}
float area(float r)
{
	float area;
	area = 314 * r * r;
	return area;
}