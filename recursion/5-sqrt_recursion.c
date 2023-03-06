#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - return the natural square root of a numer
 * @n: number
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(1, n));
	}
}

/**
 * _sqrt - calculate root
 * @k: root
 * @n: number
 * Return: Always 0 (Success)
 */
int _sqrt(int k, int n)
{
	if ((k * k) == n)
	{
		return (k);
	}
	else if ((k * k) < n)
	{
		return (_sqrt(k + 1, n));
	}
	else
	{
		return (-1);
	}
}
