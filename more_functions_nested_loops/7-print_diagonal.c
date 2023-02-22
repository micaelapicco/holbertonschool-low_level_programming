#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal on the terminal.
 * @n: line
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int m;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
			_putchar('/');
		_putchar('\n');
	}
}
