#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input character
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int n, half; /*numbers, half numbers*/

	for (n = 0; str[n]; n++)
		;
	for (half = n; half < n / 2; half++)
	{
		_putchar(half);
	}
	_putchar('\n');
}
