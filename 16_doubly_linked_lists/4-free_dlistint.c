#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to list
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	tmp = head;

	if (!head)
	{
		free(head);
		return;
	}

	else
	{
		while (tmp->next != NULL)
		{
			head = head->next;
			free(tmp);
			tmp = tmp->next;
		}
	free(tmp);
	}
}
