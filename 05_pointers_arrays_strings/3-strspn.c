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
	int ps, pa; /*position string s, position string accept*/
	unsigned int num = 0; /*save bytes (lenght)*/

	/*move on string with ps and pa, if the same char save position
	 * in num and return the loop.
	 * when string is '\0' return the last num saved*/
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
