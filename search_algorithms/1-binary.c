#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search into array
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size, m;

	while (l < r)
	{
		print_array(l, r - 1, array);
		m = ((l + r) / 2);
		if (array[m] == value)
		{
			return (m);
		}

		else if (value > array[m])
		{
			l = m + 1;
		}
		else
			r = m - 1;
	}
	return (-1);
}

/**
 * print_array - print array
 * @start: first position array
 * @end: last position
 * @array: array to print
*/
void print_array(int start, int end, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
