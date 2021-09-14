#include<stdio.h>
#include<conio.h>
viod main();
{
	int x, y, a, b, t, g;
	printf("enter 2 integer\n");
	scanf("%d%d", &x, &y);
	a = x;
	b = y;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	g = a;
	printf("GCD for %d&%dis", x, y);
	printf("%d", g);
	getch();
}