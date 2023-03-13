#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - r pointer to a newly allocated space in memory
 * @str: string copy
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *p;
	int s = 0, len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (len = 0; str[len]; len++)
		{
		}
		p = malloc(sizeof(char) * len);
		if (p == NULL)
		{
			return (NULL);
		}
		else
		for (s = 0; s <= len; s++)
		{
			p[s] = str[s];
		}
	}
	return (p);
}
