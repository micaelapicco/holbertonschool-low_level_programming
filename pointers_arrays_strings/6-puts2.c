#include "main.h"

/**
 * puts2 - print every other character
 * @str: input char
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int n, eo; /*number, every other*/

	for (n = 0; str[n]; n++)
		;
	for (eo = 0; eo < n; eo += 2)
	{
		_putchar(str[eo]);
	}
	_putchar('\n');
}
