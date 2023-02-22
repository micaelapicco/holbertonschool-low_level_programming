#include "main.h"

/**
 * _isdigit - digit
 * @c: digit
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
