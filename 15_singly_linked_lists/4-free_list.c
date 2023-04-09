#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: the pointer to fist list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

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
			free(tmp->str);
			free(tmp);
			tmp = tmp->next;
		}
	free(tmp->str);
	free(tmp);
	}
}
