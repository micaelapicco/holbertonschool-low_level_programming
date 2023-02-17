#include "main.h"

/**
 * jack_bauer - hour
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 23; a++)
	{
		a = a / 10;
		b = a % 10;
		for (c = 0; c <= 59; c++)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c = c / 10 + '0');
			_putchar(d = c% 10 + '0');
			_putchar('\n');
		}
	}
}
