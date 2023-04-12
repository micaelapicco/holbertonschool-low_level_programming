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
	int file, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDWR);

	if (file == -1)
		return (0);

	rd = read(file, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
		return (0);

	close(rd);
	free(buffer);
	return (wr);

}
