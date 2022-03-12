#include <stdio.h>

/**
 * main - prints all possible combinations of two digits without repeats
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	int ch = '0';
	int cH = '1';

	while (ch <= '9')
	{
		while (cH <= '9')
		{
			if (ch >= cH);
			else
			{
				putchar(ch);
				putchar(cH);
				putchar(',');
				putchar(' ');
			}
			cH++;
		}
		ch++;
		cH = '1';
	}
	putchar('\n');
	return (0);
}
