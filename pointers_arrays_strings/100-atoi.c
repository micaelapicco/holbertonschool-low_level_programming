#include "main.h"
#include <stdio.h>

/**
 * _atoi - change chart to int
 * @s: string
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int r = 0;

	while ((*s >= '0') && (*s <= '9'))
	{
		r = (r * 10) + ((*s) - '0');
		s++;
	}
	return(r);
}
