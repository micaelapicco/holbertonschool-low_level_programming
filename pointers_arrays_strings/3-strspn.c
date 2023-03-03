#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string initial
 * @accept: only bytes of accept
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int ps, pa;
	unsigned int num = 0; /*position s y accept*/

	for (ps = 0; s[ps] != '\0'; ps++)
	{
		for (pa = 0; s[pa] != '\0'; pa++)
		{
			if (s[ps] == accept[pa])
			{
				num++;
				break;
			}
		}
		if (s[pa] == '\0')
		{
			return (num);
		}
	}
	return (num);
}
