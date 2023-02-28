#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: buffer
 * @src: string pointed
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (point);
}
