#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
