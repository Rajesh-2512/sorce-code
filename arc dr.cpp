#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	int st angle = 20, end angle = 135;
	int radius = 150;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setcolor(4);
	arc(200, 400, st angle, end angle, radius);
	getch();
	close graph();
}