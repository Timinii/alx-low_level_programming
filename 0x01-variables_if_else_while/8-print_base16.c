#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = '0';
	char cH = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (cH <= 'f')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return (0);
}
