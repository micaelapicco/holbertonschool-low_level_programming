#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - given as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
