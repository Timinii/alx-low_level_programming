#include "main.h"

/**
 * more_numbers - prints multiplication
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = '0';
	int j = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}

	for (; i <= '4'; i++)
	{
		for (; j <= '9'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
