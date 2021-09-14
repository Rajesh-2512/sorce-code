#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	char for key;
	key = (char for)Dx417;
	while (1)
	{
		clrscr();
		printf("\n press ALT key to quit");
		if (*key & 1)
			printf("\n right shift is pressed");
		if (*key & 2)
			printf("\n left shift is pressed");
		if (*key &4)
			printf("\n ctrl lock is pressed");
		if (*key & 12)
			printf("\n scroll lock is pressed");
		if (*key & 32)
			printf("\n NUM lock is pressed");
		if (*key & 64)
			printf("\n caps lock is preessed");
		if (*key & 128)
			printf("\n insert is Activated");
		delay(99)
	}
}