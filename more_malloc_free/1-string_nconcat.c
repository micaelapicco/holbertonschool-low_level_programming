#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number bytes
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *s12;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	s12 = malloc((strlen(s1) + n) * sizeof(char) + 1);

	if (s12 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (len1 = 0; s1[len1]; len1++)
		{
			s12[len1] = s1[len1];
		}
		for (len2 = 0; len2 < n; len2++, len1++)
		{
			s12[len1] = s2[len2];
		}
		s12[len1 + 1] = '\0';
	}
	return (s12);
}
