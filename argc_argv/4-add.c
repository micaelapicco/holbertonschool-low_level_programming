#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; argv[i]; i++)
	{
	if (argc > 1 && atoi(argv[i]) > 0)
	{
		result += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", result);
	return (0);
}
