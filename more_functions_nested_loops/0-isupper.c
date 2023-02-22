#include <stdio.h>
#include "main.h"
/**
 * _isupper - c
 * @c: C
 * Return: Always 0 (Success)
 */
int _isupper(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
