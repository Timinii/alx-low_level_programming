#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 separated by ,
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
