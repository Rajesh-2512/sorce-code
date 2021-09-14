#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, i, p;
	clrscr();
	printf("\n Enter the size of Array");
	scanf("%d", &a);
	p = (int*)calloc(a, sizeof(int));
	if (p == NULL)
	{
		for (i = 0;i < a;i++)
		{
			printf("Enter value of p[i]", p[i]);
			scanf("%d", &p[i]);
		}
		free(p);
		for (i = 0;i = a;i++)
		{
			printf("\n value %d memory address %u", p[i], &p[i]);
		}
	}
	getch();
}