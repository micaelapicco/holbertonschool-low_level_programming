#include "main.h"
/**
 * main - function that creates a file
 * @argc: file number
 * @argv: content of filename
 * Return: 0 succes or 97, 98, 99, 100 if fails.
 */
int main(int argc, char *argv[])
{
	int len, file_from, file_to;
	char buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't read to %s\n", argv[2]), exit(98);
	while (len != '\0')
	{
		len = read(file_from, buffer, 1024);
		if (len == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (write(file_to, buffer, len) != len)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
