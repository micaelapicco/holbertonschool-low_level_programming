#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements or array
 * @n: number array
 * @a: array
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int r;/*position*/

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);
		if (r == n - 1)
		{
			printf("");
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
