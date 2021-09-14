#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("Enter the size of the Array");
	scanf("%d", &a);
	p = (int*)malloc(a * size of(int));
	if (p == NULL)
	{
		printf("The memory allocation fails!");
	}
	for (i = 0;i < a;i++)
	{
		printf("Enter value for p[%d]", i);
		scanf("%d", &p[i]);
	}
	for (i = 0;i < a;i++)
	{
		printf("\n value %d memory address%u", p[i], &p[i]);
	}
	getch();
}
