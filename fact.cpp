#include<stdio.h>
#include<conio.h>
void main()
{
	printf("\nEnter the number");
	scanf("%d", &a);
	fact = factorial(a);
	printf("factorial value=%d", fact);
	getch();
}
int factorial(int x)
{
	int f;
	if (x == 0)
		return(1);
	else
	{
		f = x * factorial(x - 1);
		return9(f);
	}
}