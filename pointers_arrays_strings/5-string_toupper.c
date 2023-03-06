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
	
	/*move on string a and if char is between 97 or 122 (min)
	 *rest 32 ascii table, and it changes lower to upper*/

	for (l = 0; a[l]; l++)
	{
		if (a[l] >= 97 && a[l] <= 122)
		{
			a[l] -= 32;
		}
	}
	return (a);
}
