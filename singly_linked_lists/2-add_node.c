#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list
 * @head: te first pointer
 * @str: string
 * Return: content of str
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
