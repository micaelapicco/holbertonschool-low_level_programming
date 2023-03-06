#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int len, h, c = 8; /*lenght, hight and column max*/

	/*the chessborard have 8*8 locates, move on string with len
	 * until 8 and press len (row) and h(column)*/

	for (len = 0; len < c; len++)
	{
		for (h = 0; h < c; h++)
		{
			_putchar(a[len][h]);
		}
		_putchar('\n');
	}
}
