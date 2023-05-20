#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the first index where value is located
 * If value is not present in array
 * or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (array[i]);
		}
	}
	return (-1);
}
