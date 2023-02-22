#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: line
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int s;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < n; s++)
			_putchar('_');
		_putchar('\n');
	}
}
