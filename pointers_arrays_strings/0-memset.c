#include <stdio.h>
#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @n: fills the first n bytes
 * @s: of the memory area pointed to s
 * @b: with the constant byte b
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
