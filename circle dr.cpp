#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	int mid x, mid y;
	int radius = 100;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	mid x = get max x() / 2;
	mid y = get max y() / 2;
	setcolor(2);
	circle(mid x, mid y, radius);
	getch();
	close graph();
	getch();
}