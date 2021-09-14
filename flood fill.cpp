#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\truboc3\\bgi");
	setcolor(2);
	circle(20, 40, 25);
	setfill style(1, 2);
	flood fill(20, 40, 2);
	getch();
	close graph();
}