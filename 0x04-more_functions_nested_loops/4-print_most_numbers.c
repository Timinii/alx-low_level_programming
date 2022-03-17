#include "main.h"

/**
 * print_most_numbers - prints numbers for 0 to 9
 *
 * Return: Alwats 0.
 */
void print_most_numbers(void)
{
	char text[11] = "0123456789";
	int i = 0;

	for (i = 0; i < 11; i++)
	{
		if (text[i] == '2' || text[i] == '4')
		{
			i++;
		}
		_putchar(text[i]);
	}
	_putchar('\n');
}
