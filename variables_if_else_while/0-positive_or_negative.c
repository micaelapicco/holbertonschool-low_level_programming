#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%zu is positive");
}
	else 
{
	printf("%zu is negative");
}
	return (0);
}
