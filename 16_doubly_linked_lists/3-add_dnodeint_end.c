#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: first pointer
 * @n: content of new node
 * Return: content in order
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = NULL;
	dlistint_t *len = *head;

	end = malloc(sizeof(dlistint_t));

	if (!end)
		return (0);

	end->n = n;

	if (!*head)
	{
		(*head) = end;
		end->prev = NULL;
	}
	else
	{
		while (len->next != NULL)
		{
			len = len->next;
		}
		len->next = end;
		end->prev = len;
	}
	end->next = NULL;
	return (*head);
}
