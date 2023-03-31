#include "main.h"
#include <stdio.h>
/**
 * free_grid - free a 2 dimensional grid
 * @grid: grid
 * @height: y
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
