#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: parameters n
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}

	va_end(p);

	return (sum);
}
