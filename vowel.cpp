#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter a character");
	ch = getch();
	if (ch == 65)
	{
		printf("%c is vowel", ch);
	}
	else
		if (ch == 69)
		{
			printf("%c is vowel", ch);
		}
		else
			if (ch == 73)
			{
				printf("%c is vowel", ch);
			}
			else
				if (ch == 79)
				{
					printf("%c is vowel", ch);
				}
				else
					if (ch == 85)
					{
						printf("%c is vowel", ch);
					}
					else
						printf("The character %c is not a vowel", ch);
}