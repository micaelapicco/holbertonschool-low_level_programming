#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - of chars, and initializes it with a specific char
 * @size: size of array
 * @c: specific character
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int m;

	if (p == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (0);
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			p[m] = c;
		}
	}
	return (p);
}
