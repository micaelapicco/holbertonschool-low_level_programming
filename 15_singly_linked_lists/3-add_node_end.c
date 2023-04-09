#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list
 * @head: the first node
 * @str: string to copy
 * Return: len and string new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *len = *head;

	end = malloc(sizeof(list_t));

	if (!end)
		return (NULL);

	end->len = strlen(str);
	end->str = strdup(str);
	end->next = NULL;

	if (*head == NULL)
		*head = end;

	else
	{
		while (len->next != NULL)
		{
			len = len->next;
		}
		len->next = end;
	}
	return (*head);
}
