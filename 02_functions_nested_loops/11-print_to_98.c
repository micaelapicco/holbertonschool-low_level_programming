#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int m;

	if (n == 98)
		printf("%d", n);
	else if (n < 98)
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
	else
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
	printf("\n");
}
