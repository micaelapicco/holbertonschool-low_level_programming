#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int c; /*with c, move to string until NULL and print c locate of string*/

	for (c = 0; c[str]; c++)
	{
	_putchar(c[str]);
	}
	_putchar('\n');
}
