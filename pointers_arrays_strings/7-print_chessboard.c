#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int len, h, c = 8;

	for (len = 0; len < c; len++)
	{
		for (h = 0; h < c; h++)
		{
			_putchar(a[len][h]);
		}
		_putchar('\n');
	}
}
