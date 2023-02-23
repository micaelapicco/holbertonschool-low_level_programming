#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal on the terminal.
 * @n: line
 * @space: space
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int m;
	int space;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space <= n; space++)
		{
			_putchar(' ');
		}
		for (m = 0; m < n; m++)
		{	
		_putchar('\\');
		_putchar('\n');
		}
	}
	_putchar('\n');
}
