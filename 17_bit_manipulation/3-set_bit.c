#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of bit you want to set
 * Return: Nothing.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*check if the pointer and index it is valid range (64bits unsigned int)*/
	if (index > 63 || !n)
		return (-1);
	/*if the value is 1, set a bit in index position using OR*/
	*n |= 1 << index;
	return (1);
}
