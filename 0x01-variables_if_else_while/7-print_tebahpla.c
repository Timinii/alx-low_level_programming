#include <stdio.h>

/**
 * main - prints the alphabet from z to a
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
