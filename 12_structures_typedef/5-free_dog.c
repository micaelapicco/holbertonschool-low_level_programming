#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free d
 * @d: pointer dog structure
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
