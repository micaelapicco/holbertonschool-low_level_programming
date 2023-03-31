#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - input is a prime number
 * @n: number
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int rest = 0;

	if (n <= 1)
	{
		return (0);
	}
	else if (n > 1)
	{
		rest = prime_number(n, 2);
	}
	return (rest);
}
/**
 * prime_number - input is a prime number
 * @p: prime
 * @k: number
 * Return: Always 0 (Success)
 */
int prime_number(int p, int k)
{
	if (p % k == 0 && k < p)
	{
		return (0);
	}
	else if (p == k)
	{
		return (1);
	}
	else
	{
		return (prime_number(p, k + 1));
	}
}
