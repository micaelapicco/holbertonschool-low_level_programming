#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

/*it is the similar that strcat except use at most number bytes from source. 
 *first moves on dest with d and moves on source with s if s is less than n*/

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (s = 0; src[s] != '\0' && s < n; s++, d++)
	{
		dest[d] = src[s];
	}
	return (dest);
}
