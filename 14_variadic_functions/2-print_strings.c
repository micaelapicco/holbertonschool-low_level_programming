#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer string to be printed between n
 * @n: numbers
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char*);

		if (i == n - 1 || !separator)
		{
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else
		{
			if (!s)
				printf("(nil)%s", separator);
			else
				printf("%s%s", s, separator);
		}
	}
	printf("\n");

	va_end(p);
}

