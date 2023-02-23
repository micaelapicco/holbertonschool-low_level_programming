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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (space = 0; space < m; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
