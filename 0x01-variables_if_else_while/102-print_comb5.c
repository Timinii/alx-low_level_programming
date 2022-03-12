#include <stdio.h>

/**
 * main - prints all possible combinations of two digits with repeats
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	int ch = '0';
	int cH = '0';
	int prvch = '0';
	int prvcH = '0';

	while (prvch <= '9')
	{
		while (prvcH <= '9')
		{
			if(prvch >= prvcH)
				;
			else
			{
				while (ch <= '9')
				{
					if(prvcH >= ch)
						;
					else
					{
					while(cH <= '9')
					{
					if(ch >= cH)
						;
					else
					{
					putchar(prvch);
					putchar(prvcH);
					putchar(' ');
					putchar(ch);
					putchar(cH);
					putchar(',');
					putchar(' ');
					}
					cH++;
					}
					}
					cH = '0';
					ch++;
				}
				ch = '0';
				prvcH++;
			}
			}
			prvcH ='0';
			prvch++;
	}
	putchar('\n');
	return (0);
}
