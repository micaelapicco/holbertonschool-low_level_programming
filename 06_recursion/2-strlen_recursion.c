#include <stdio.h>

/**
 * _strlen_recursion - return the lenght of a string
 * @s: string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c = _strlen_recursion(s + 1);
		return (c += 1);
	}
	return (0);
}
