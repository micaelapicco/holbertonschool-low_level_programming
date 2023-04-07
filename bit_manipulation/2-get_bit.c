#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index of the bit you want to get
 * Return: the value of the vit a index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
