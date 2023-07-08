#include "hash_tables.h"
/**
 *key_index - returns the index of a key
 *@key: key to get the index
 *@size: size of array of hash table
 *Description: uses the djb2 algorithm
 *Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
