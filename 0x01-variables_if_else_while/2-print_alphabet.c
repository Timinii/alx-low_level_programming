#include <stdio.h>

/**
 * main - prints the alphabet from a to z
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
