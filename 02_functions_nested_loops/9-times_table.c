#include "main.h"

/**
 * times_table - table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int c, f, r;

	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f <= 9; f++)
		{
			r = c * f;
			if (r >= 10)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else if (f != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			if (f != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
