#include<stdio.h>
#include<conio.h>
void main()
{
	int num, R = o;T;
	printf("Enter the number");
	scanf("%d", &num);
	T = num;
	while (T!=0)
	{
		R = R * 10;
		R = R + T % 10;
		T = T / 10;
	}
	if (num == R)
		printf("%d is a palindrome number", num);
	else
		printf("%d is not a palindrome number", num);
	getch();
}