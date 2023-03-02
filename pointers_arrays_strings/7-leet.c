#include "main.h"
#include <stdio.h>

/**
 * leet - letter swap number
 * @a: array
 * Return: Always 0 (Success)
 */
char *leet(char *a)
{
	int s; /*string*/
	int let; /*letter*/
	char l[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (let = 0; l[let]; let++)
	{
		for (s = 0; a[s] != '\0'; s++)
		{
			if (a[s] == l[let])
			{
				a[s] = n[let];
			}
		}
	}
	return (a);
}

