#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: destination
 * @src: source
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (s = 0; src[s] != '\0'; s++, d++)
	{
		dest[d] = src[s];
	}
	return (dest);
}
