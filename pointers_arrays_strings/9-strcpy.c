#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: buffer
 * @src: string pointed
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest ++;
		src++;
	}
	return(dest);
}
