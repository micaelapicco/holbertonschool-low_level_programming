#include "main.h"

/**
 * reverse_array - print a array reverse
 * @n: number elements array
 * @a: pointer array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int string, left;

	for (left = 0; left < n / 2; left++)
	{
		string = a[left];
		a[left] = a[n - left - 1];
		a[n - left - 1] = string;
	}
}
