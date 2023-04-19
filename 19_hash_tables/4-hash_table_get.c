#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key you looking for
 * Return: the value associated eith the elemento or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = 0, len = 0;
	hash_node_t *check  = NULL;

	if (!ht)
		return (NULL);

	len = ht->size;

	for (; i < len; i++)
	{
		check = ht->array[i];
		while (check)
		{
			if (strcmp(check->key, key) == 0)
				return (check->value);
			check = check->next;
		}
	}
	return (NULL);
}
