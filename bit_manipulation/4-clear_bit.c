#include "main.h"
/**
 * clear_bit - that set value of a bit to 0 at a given index
 * @index: is the index position
 * @n: pointer to number
 * Return: 1 if worked or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
