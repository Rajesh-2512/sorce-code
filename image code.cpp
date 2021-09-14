#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT, gm;
	void* img;
	unsigned img_size;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setfillstyle(1, 2);
	rectangle(100, 100, 520, 300);
	floodfill(110, 110, WHITE);
	circle(300, 200, 50);
	circle(270, 189, 8);
	circle(328, 189, 8);
	getch();
	img_size = imgsize(100, 100, 520, 300);
	img = malloc(img_size);
	get image(100, 100, 520, 300);
	outtext xy(210, 110, "IMAGE SAVED INTO MEMORY");
	getch();
	put image(100, 100, img, COPY_PUT);
	outtext xy(150, 126, "NOW AGAIN PLOTTING SAVE IMAGE ON SCREEN");
	getch();
	free(img);
	close graph();
}