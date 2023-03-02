#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words
 * @a: array
 * Return: Always 0 (Success)
 */
char *cap_string(char *a)
{
	int l; /*letter*/
	int se; /*separator*/
	char s[13] = {32, 33, 34, 63, 123, 125, 40, 41, 59, 10, 9, 44};

	for (l = 0; a[l] != '\0'; l++)
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] = a[0] - 32;
		}
		for (se = 0; se < 13; se++)
		{
			if (a[l] >= 97 && a[l] <= 122 && a[l - 1] == s[se])
			{
				a[l] = a[l] - 32;
			}
		}
	}
	return  (a);
}
