#include<stdio.h>
#include<conio.h>
void main()
{
	int x[] = { 1,2,3,4,5,6,7,8,9 };
	int i, ptr;
	ptr = x;
	for (i = 0;i < 9;i++)
	{
		printf("Array element x[d] is %d", i, *ptr);
		ptr++;
	}
	getch();
}