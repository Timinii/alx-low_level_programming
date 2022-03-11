#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* this program has the time function */

/**
 * main - checks the last digit of a number
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (0 < lastdigit && lastdigit < 6 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	else if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	return (0);
}
