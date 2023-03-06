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
	char l[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int n[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	/*with let move on string a, if let is same as l(some characters i
	 * want change for others (n)), save a let = n(string)*/
	for (let = 0; a[let]; let++)
	{
		for (s = 0; l[s]; s++)
		{
			if (a[let] == l[s])
			{
				a[let] = n[s];
			}
		}
	}
	return (a);
}
