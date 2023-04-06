#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: first node
 * @idx: position new node
 * @n: content new node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *aux = *h;
	unsigned int i = 0;

	/*asign memory new node*/
	new = malloc(sizeof(dlistint_t));

	/*check malloc works*/
	if (!new || idx < 1)
		return (NULL);
	/*asign value new node*/
	new->n = n;
	/*new node at the beginning*/
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = (*h);
		(*h)->prev = new;
		(*h) = new;
	}
	else /*node in other position (idx)*/
	{
		if (idx == 1)
			(*h) = new;
		new->n = n;
		for (; i < (idx - 1); i++) /*find the before position with -1*/
		{
			aux = aux->next;
		}
		new->next = aux->next; /*change pointers*/
		aux->next = new;
	}
	return (*h);
}
