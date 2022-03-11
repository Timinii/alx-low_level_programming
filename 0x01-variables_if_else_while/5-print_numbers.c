#include <stdio.h>

/**
 * main - prints the alphabet from 0 to 9
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
