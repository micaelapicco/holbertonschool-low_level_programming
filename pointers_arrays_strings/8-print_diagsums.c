#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of square
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x; /*length, hight*/
	int d1 = 0, d2 = 0;

	for (x = 0; x < size; x++)
	{
		d1 += a[x + (x * size)];
		d2 += a[(x * (x + 1) - (x + 1))];
	}
	printf("%d, %d", d1, d2);

	printf("\n");
}
