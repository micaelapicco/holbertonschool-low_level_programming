#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: the first pointer
 * @n: content new node
 * Return: content nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;

	}
	else
		new->next = NULL;

	(*head) = new;
	(*head)->prev = NULL;

	return (*head);
}
