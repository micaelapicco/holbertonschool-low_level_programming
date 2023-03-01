#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: number string
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
