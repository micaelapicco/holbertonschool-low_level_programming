#include <stdio.h>

/**
 * main - combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		if (n <= 8)
		{
		putchar(',');
		putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
