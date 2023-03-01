#include "main.h"
#include <stdio.h>

/**
 * _atoi - change chart to int
 * @s: string
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	while (*s != '\n')
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		s++;
	}
	return (n * sign);
}
