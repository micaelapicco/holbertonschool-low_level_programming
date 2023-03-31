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

/* with r move on string until n (number of elements of the array) and print r location of a(array), if r == n -1 because is '\0' else print coma (separator)*/

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);
		if (r == n - 1)
		{
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
