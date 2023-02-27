#include "main.h"

/**
 * print_rev - print a string reverse
 * @s: string
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int c; /* count */
	int l; /* lines */

	for (c = 0; s[c]; c++)
		;
	for (l = (c - 1); l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
