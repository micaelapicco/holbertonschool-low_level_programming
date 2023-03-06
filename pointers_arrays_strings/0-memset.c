#include <stdio.h>
#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @n: number of byte to be filled starting from s to be filled
 * @s: pointer to the destination object
 * @b: with the constant byte b
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	/*move on string s with len until n and suply with constant chatacter
	 * b*/

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
