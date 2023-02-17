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
		_putchar(a);
		_putchar(b);
		_putchar(':');
		for (c = 0; c <= 59; c++)
		{
		c = c / 10;
		d = c % 10;
		_putchar(c);
		_putchar(d);
		}
	}
}
