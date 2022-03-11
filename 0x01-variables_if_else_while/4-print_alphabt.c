#include <stdio.h>

/**
 * main - prints the alphabet from a to z with \n without q and e
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
