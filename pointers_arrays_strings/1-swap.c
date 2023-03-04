#include "main.h"

/**
 * swap_int - change value
 * @a: number
 * @b: number
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c; /* c = is a temporal variable, so im assign a to temp,
		  b to a, and temp to b*/
	
	c = *a;
	*a = *b;
	*b = c;
}
