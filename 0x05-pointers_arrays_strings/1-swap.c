#include "main.h"
/**
 * swap_int - swamps the values of two integers
 * @a: pointer value of a int
 * @b: pointer value of b int
 * Return:Always zero
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
