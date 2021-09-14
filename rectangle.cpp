#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setcolor(4);
	setlinestyle(1, 0, 1);
	rectangle(269,189, 369, 289);
	getch();
	close graph();
}