#include "main.h"

/**
 * print_square - print #
 * @size: size
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int space;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < size; h++)
		{
			for (space = 0; space < size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
