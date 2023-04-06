#include "main.h"
/**
 * print_binary - function that prnts the binary representation of a num
 * @n: number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
