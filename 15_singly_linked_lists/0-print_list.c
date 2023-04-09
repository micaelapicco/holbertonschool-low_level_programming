#include "lists.h"
/**
 * print_list - singly linked list
 * @h: pounter structure
 * Return: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = (h->next);
	}
	return (count);
}
