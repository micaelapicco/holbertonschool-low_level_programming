#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: first ocurrence of the character returns a pointer
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}
