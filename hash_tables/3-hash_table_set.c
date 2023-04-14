#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key and cant be an empety
 * @value: associated with a key
 * Return: 1 if it succeeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	char *newvalue = strdup(value), *newkey = strdup(key);
	unsigned int index = 0;

	if (!ht	|| !key)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new || !newkey || !newvalue)
	{
		if (new)
			free(new);
		if (newkey)
			free(newkey);
		if (newvalue)
			free(newvalue);
		return (0);
	}

	new->key = newkey;
	new->value = newvalue;

	if (ht->array[index] == NULL || (strcmp(ht->array[index]->key, key) == 0))
	{
		if (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
		}
		ht->array[index] = new;
	}

	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
