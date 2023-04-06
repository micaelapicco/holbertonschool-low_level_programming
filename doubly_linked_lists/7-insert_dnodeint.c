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
	dlistint_t *head = *h;
	unsigned int i = 1;

	if (idx == 0)
		new = add_dnodeint(h, n);

	else
	{
		if (head)
			while (head->prev != NULL)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h,n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new);
}

