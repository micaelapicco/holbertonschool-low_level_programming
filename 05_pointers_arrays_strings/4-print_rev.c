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

	for (c = 0; s[c]; c++) /*move with c the string s*/
		;
	for (l = (c - 1); l >= 0; l--)
		/*whit l (other variable) inicializate on c-a move until 0 and the reverse (l--)*/
	{
		_putchar(s[l]); /*print location l on the string *s */
	}

	_putchar('\n');
}
