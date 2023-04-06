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
	if (!new)
		return (NULL);
	/*asign value new node*/
	new->n = n;
	/*new node at the beginning*/
	if (idx == 0 || !h || !(*h))
		return (add_dnodeint(h, n));
	/*new node at the end*/
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	/*node in other position (idx)*/
	else
	{
		while (aux != NULL && i < (idx - 1)) /*find the before position with -1*/
		{
			aux = aux->next;
			i++;
		}
	}
	new->next = aux->next; /*change pointers*/
	aux->next = new;
	new->prev = aux->prev;
	aux->prev = new;
	return (new);
}
