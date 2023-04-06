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
	if (!new || !aux)
		return (NULL);
	/*asign value new node*/
	new->n = n;
	/*new node is at the beginning*/
	if (!*h)
	{
		new->next = NULL;
		new->prev = NULL;
		aux = new;
		return (aux);
	}
	else if (aux->next == NULL)
	{
		new->prev = aux;
		new->next = NULL;
		aux->next = new;
	}
	else if (idx == 0)
	{
		new->prev = NULL;
		new->next = aux;
		aux->prev = new;
		aux = new;
		return (new);
	}
	else
	{
		while (aux != NULL && i < (idx -1))
		{
			aux = aux->next;
			i++;
		}
	}
	temp = aux->next;
	new->next = temp;
	new->prev = aux;
	aux->next = new;
	temp->prev = new;
	return (new);
}
