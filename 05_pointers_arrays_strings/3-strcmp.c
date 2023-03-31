#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare string
 * @s1: string one
 * @s2: string two
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	/*moves on twice strings and if are diferents return the diference
	 * and move one by one until '\0'
	 * if twice are the same returns 0 else return re result on
	 * ascii table*/

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
		return ( *s1 - *s2);
}
