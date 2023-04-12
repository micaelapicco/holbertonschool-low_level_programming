#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file
 * @text_content: content of filename
 * Return: 1 succes or -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len] != '\0')
	{
		len++;
	}
	len++;

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content)
		write(file, text_content, len - 1);
	else
		return (1);
	close(file);

	return (1);
}
