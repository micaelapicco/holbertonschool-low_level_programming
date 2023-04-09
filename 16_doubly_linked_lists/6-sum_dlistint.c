#include "lists.h"
/**
 * sum_dlistint - sum of all the data (int) of linked list
 * @head: first pointer
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;

	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
