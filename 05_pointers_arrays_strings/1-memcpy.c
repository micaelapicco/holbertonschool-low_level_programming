#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copy memory area
 * @n: copy n bytes from
 * @src: source memory
 * @dest: to destination memory area
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s; /*variable*/

	/*move on with s until n for source string, igualar source to 
	 * destinatination, last, return dest. */
	for (s = 0; s < n; s++)
	{
		dest[s] = src[s];
	}

	return (dest);
}
