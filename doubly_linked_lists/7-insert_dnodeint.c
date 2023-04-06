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
	dlistint_t *aux = *h, *temp;
	unsigned int i = 0;

	/*asign memory new node*/
	new = malloc(sizeof(dlistint_t));

	/*check malloc works*/
	if (!new)
		return (NULL);
	/*asign value new node*/
	new->n = n;
	/*new node is at the beginning*/
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	if (idx == 0 || !(*h) || !h)
		return (add_dnodeint(h, n));

	while (aux && i < (idx - 1))
	{
		aux = (aux)->next;
		if (aux == NULL)
			return (NULL);
		i++;
	}
	temp = (aux)->next;
	new->prev = aux;
	new->next = temp;
	aux->next = new;
	temp->prev = new;
	return (new);
}
