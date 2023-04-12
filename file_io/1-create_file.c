#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file
 * @text_content: content of filename
 * Return: 1 succes or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len] != '\0')
	{
		len++;
	}
	len++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write(file, text_content, len - 1);
	close(file);

	return (1);
	}
