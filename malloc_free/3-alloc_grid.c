#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of int
 * @width: x
 * @height: y
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **p;


	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		p[y] = malloc(width * sizeof(int));
		if (p[y] == NULL)
		{
			for (--y; y >= 0; --y)
			{
				free(p[y]);
			}
			free(p);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			p[y][x] = 0;
		}
	}
	return (p);
}
