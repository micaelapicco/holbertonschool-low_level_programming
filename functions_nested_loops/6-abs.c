#include "main.h"

/**
 * _abs - absolute
 * @n: number
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
