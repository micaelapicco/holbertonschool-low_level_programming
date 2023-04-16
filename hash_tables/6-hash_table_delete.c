#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *node = NULL;
	int sizeht = 0, i = 0;

	if (!ht)
	{
		free(ht);
		return;
	}
	sizeht = ht->size;

	while (i < sizeht)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			node = node->next;
		}
		free(node);
		i++;
	}
	free(ht->array);
	free(ht);
}
