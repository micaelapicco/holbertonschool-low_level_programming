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

	for (s = 0; s < n; s++)
	{
		dest[s] = src[s];
	}

	return (dest);
}
/**
 * create_file - function that creates a file
 * @filename: file
 * @text_content: content of filename
 * Return: 1 succes or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;
	char *buffer;

	if (!filename)
		return (-1);

	while (text_content && text_content[len] != '\0')
	{
		len++;
	}
	len++;

	buffer = malloc(len);
	if (!buffer)
		return (-1);

	_memcpy(buffer, text_content, len);
	buffer[len - 1] = '\0';

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write(file, text_content, len);
	close(file);
	free(buffer);
	return (1);
}
