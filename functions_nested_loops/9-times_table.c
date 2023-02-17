#include "main.h"

/**
 * times_table - table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int c;
	int f;

	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f <= 9; f++)
		{
			_putchar(c * f + '0');
				if (c < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
