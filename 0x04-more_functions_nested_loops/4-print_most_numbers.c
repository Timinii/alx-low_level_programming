#include "main.h"

/**
 * main - prints numbers for 0 to 9
 *
 * Return: Alwats 0.
 */
void print_most_numbers(void)
{
	char text[9] = "01356789";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
}
