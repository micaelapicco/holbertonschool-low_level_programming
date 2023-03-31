#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: buffer
 * @src: string pointed
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char *point = dest; /*make a pointer poin, move on string source until '\0' and save in destination source and move by source and destination, then return destination and point because the task says twice*/ 

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (point);
}
