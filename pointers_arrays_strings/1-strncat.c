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
	int d;
	int s;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (s = 0; src[s] != '\0' && s < n; s++, d++)
	{
		dest[d] = src[s];
	}
	return (dest);
}
