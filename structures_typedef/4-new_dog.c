#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	p = malloc(sizeof(dog_t));

	if (!p)
		return (NULL);

	if (name)
	{
		p->name = malloc(strlen(name) + 1);
		strcpy(p->name, name);
	}
	else if (!name)
	{
		free(p);
		return (NULL);
	}
	if (age)
	{
		p->age = age;
	}
	else if (!age)
	{
		free(p);
		return (NULL);
	}
	if (owner)
	{
		p->owner = malloc(strlen(owner) + 1);
		strcpy(p->owner, owner);
	}
	else if (!owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
