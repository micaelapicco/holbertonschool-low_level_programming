#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @head: first node
 * @index: index linked list
 * Return: 1 succed or -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *temp;
	unsigned int i = 0;

	if (aux != NULL)
		while (aux->prev != NULL)
			aux = aux->prev;

	while (aux != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = aux->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = aux->next;
				if (aux->next != NULL)
					aux->next->prev = temp;
			}
			free(aux);
			return (1);
		}
		temp = aux;
		aux = aux->next;
		i++;
	}
	return (-1);
}
