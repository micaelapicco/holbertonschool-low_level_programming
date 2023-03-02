#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print a array reverse
 * @n: number elements array
 * @a: pointer array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int l; /* lines */

	for (n = 0; a[n]; n++)
		;
	for (l = (n - 1); l >= 0; l--)
	{
		printf("%d", l);
	}
}
