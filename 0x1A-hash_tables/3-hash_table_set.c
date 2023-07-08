#include "hash_tables.h"

/**
 *hash_table_set - add an element to the table
 *@ht: hash table
 *@key: key to add, cannot be empty
 *@value: value associated with key
 *Return: success 1, else failure 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, i;
	char *value_copy;

	/* check input is a valid one */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value); /* creaye a copy of the value */

	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++) /*search for key in hash table */
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
