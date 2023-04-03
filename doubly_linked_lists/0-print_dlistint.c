#include "lists.h"
/**
 * print_dlistint - print all elements of a dlistint
 * @h: pointer head
 * Return: counter
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
