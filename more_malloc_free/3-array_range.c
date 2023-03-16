#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: values min
 * @max: values max
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *p, x, y;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0, y = min; y <= max; x++, y++)
	{
		p[x] = y;
	}
	return (p);

}
