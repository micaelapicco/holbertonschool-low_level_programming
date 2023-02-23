#include "main.h"

/**
 * print_triangle - print triangleee
 * @size: size
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int t;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t > size; t--)
		{
			for (space = 0; space > t; space--)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
