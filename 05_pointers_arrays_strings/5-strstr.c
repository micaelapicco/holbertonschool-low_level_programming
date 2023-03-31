#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds the first ocurrence of the substrings
 * @needle: substring
 * @haystack: string main
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int h, n; /*move on haystack with , and needle with n*/

	/*if needle doen´t exist return haystack*/
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	/*move on haystack and if the same as needle in the first 
	 * position on needle, save the position and sum haystack and
	 * needle position and break the loop*/
	for (h = 0; haystack[h]; h++)
	{
		if (haystack[h] == needle[0])
		{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[h + n] != needle[n])
			{
			break;
			}
		}
		if (needle[n] == '\0')
		{
			return (haystack + h);
		}
			}
	}
	return ('\0');
}
