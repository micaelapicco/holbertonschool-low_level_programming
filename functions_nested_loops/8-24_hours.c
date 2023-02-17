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

	for (a = 0; a <= 23; a++)
	{
		a = a / 10;
		b = a % 10;
		_putchar(a);
		_putchar(b);
	}
	_putchar(':');
	for (a = 0; a <= 59; a++)
	{
		a = a / 10;
		b = a % 10;
		_putchar(a);
		_putchar(b);
	}
}
