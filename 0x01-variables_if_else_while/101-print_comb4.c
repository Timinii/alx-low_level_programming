#include <stdio.h>

/**
 * main - prints all possible combinations of three digits without repeats
 *
 *  Return: gives zero if program is good
 */
int main(void)
{
	int ch = '0';
	int cH = '1';
	int Ch = '2';

	while (ch <= '7')
	{
		while (cH <= '8')
		{
			if (ch >= cH)
				;
			else
			{
				while (Ch <= '9')
				{
					if (cH >= Ch)
						;
					else
					{
						putchar(ch);
						putchar(cH);
						putchar(Ch);
						if (ch != '7')
						{
							putchar(',');
							putchar(' ');
						}					
					}
					Ch++;
				}
			}
			Ch = '2';
			cH++;
		}
		ch++;
		cH = '1';
	}
	putchar('\n');
	return (0);
}
