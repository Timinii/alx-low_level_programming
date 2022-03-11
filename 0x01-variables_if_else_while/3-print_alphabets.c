#include <stdio.h>

/**
 * main - prints the alphabet from a to z and A to Z
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = 'a';
	char cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return (0);
}
