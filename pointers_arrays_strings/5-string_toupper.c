#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase to uppercase
 * @a: array
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	int l;

	for (l = 0; a[l]; l++)
	{
		if (a[l] >= 97 && a[l] <= 122)
		{
			a[l] -= 32;
		}
	}
	return (a);
}
