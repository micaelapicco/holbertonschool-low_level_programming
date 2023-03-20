#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to dog
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
		{
		printf("Name: %s\n", d->name);
		}
		else
		printf("Name: (nil)");

		if ((*d).age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		printf("0000000\n");

		if ((*d).owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
