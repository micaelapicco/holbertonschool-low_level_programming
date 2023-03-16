#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number elements
 * @size: bytes
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = calloc(nmemb, size);

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}


