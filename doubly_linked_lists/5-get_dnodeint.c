#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of list
 * @head: first pointer
 * @index: node to be returned
 * Return: node number
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *p = head;

	if (!head)
		return (NULL);

	for (; num < index; num++)
	{
		if (p->next)
			p = p->next;
		else
			return (NULL);
	}

	return (p);
}
