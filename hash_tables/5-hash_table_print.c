#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: ht or NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	int index = 0, len = 0;
	hash_node_t *check = NULL;
	char *key, *value;

	if (!ht)
		return;

	len = ht->size;
	printf("{");

	for (index = 0; index < len; index++)
	{
		check = ht->array[index];
		while (check)
		{
			key = check->key;
			value = check->value;

			if (index > 0)
				printf(", ");

			printf("'%s': '%s'", key, value);
			check = check->next;
		}
	}
	printf("}\n");
}
