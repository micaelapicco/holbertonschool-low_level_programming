#include "main.h"

/**
 * print_last_digit - print ld
 * @ld: number
 * Return: Always 0 (Success)
 */
int print_last_digit(int ld)
{
	int n;

	n = ld % 10;

	if (n < 0)
	{
		n = n * -1;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
