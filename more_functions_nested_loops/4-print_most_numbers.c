#include "main.h"

/**
 * print_most_numbers - print
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int a;

	for  (a = 0; a <= 9; a++)
	{
		if (a == 2 && a == 4)
		{
			a++;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
