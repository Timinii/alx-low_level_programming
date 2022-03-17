#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char text[11] = "0123456789";
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
}
