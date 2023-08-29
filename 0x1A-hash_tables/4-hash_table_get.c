#include "hash_tables"

/**
 *hast_tables_get - retrieves a value associated with a key
 *@ht: hash table to look for
 *@Key: key to look for
 *Return: value associated if found, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
