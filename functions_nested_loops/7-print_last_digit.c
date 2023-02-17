#include "main.h"

/**
 * print_last_digit - print ld
 * @ld: number
 * Return: Always 0 (Success)
 */
int print_last_digit(int ld)
{
	int n;

	if (ld < 0)
	{
		n = ld % 10;
		_putchar(n + '0');
	}
	else
	{
		ld = ld * -1;
		n = ld % 10;
		_putchar (n + '0');
	}
}
