#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: matches with string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int pa;

	while (*s != '\0')
	{
		for (pa = 0; accept[pa]; pa++)
		{
			if (*s == accept[pa])
			{
				return (s);
			}
		}
	s++;
	}
	return (NULL);
}
