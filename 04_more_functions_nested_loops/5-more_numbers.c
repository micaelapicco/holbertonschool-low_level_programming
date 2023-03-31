#include "main.h"

/**
 * more_numbers - numbers
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int t;
	int n;

	for (t = 0; t <= 9; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
