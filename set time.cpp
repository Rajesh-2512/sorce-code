#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	struct dostime_tst;
	st.hour = 19;
	st.minute = 0;
	st.second = 0;
	st.hsecond = 0;
	printf("setting time to 5pm\n");
	_dos - settime(&st);
	system("time");
	getch();
}