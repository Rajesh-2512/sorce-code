#include<stdint.h>
#include<conio.h>
#include<dos.h>
void main()
{
	struct dostime_tt;
	_dos - gettime(&t);
	clrscr();
	printf("the current time is %2d:%02d:02d.2%d\n", t.hour, t.minute, t.second, t.hsecond);
	getch();
}