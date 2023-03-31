#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int x, y;

	for (x = 1; argv[x]; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
		if (argc > 1 && isdigit(argv[x][y]))
		{
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		}
		result += atoi(argv[x]);
	}
	printf("%d\n", result);
	return (0);
}
