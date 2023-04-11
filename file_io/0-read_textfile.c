#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters on file
 * Return: 0 if can´t be opened or read, filename if NULL or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t let, read_count = 0;
	char *text;
	/*check if filename exist and create buffer for text*/
	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	/*check if file open correctly*/
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	/*let read file and save numbers of char, if fails free text*/
	/* and close the file, return error*/
	while ((let = read(file, text, letters)) > 0)
	{
		read_count += let;
		if (write(STDOUT_FILENO, text, let) != let)
		{
			free(text);
			close(file);
			return (0);
		}
	}
	free(text);
	close(file);
	return (read_count);
}
