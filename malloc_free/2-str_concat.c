#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1 : first string
 * @s2: second string
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *s12;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	else
	{
		s12 = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
		if (s12 == 0)
		{
			return (NULL);
		}
		else
		for (len1 = 0; s1[len1]; len1++)
		{
			s12[len1] = s1[len1];
		}
		for (len2 = 0; s2[len2]; len2++, len1++)
		{
			s12[len1] = s2[len2];
		}

	return (s12);
	}
}
