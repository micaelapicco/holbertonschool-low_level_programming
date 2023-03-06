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
	/*move on string s until '\0', if *s is the same as character c
	 * return and move un by one s. if diferent return null*/
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s != c)
	{
		return (NULL);
	}
	return (s);
}
