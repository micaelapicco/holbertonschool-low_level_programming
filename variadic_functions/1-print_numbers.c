#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: pointer string to be printed between n
 * @n: numbers
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || !separator)
			printf("%d", va_arg(p, int));
		else
			printf("%d%s", va_arg(p, int), separator);
	}
	printf("\n");

	va_end(p);
}

