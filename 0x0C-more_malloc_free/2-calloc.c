#include <stdlib.h>
#include "main.h"
/**
 * _calloc - alloactes memory of arrays using malloc.
 * @nmemb: number of elements in array.
 * @size: size of elements
 * Return: NULL if size or nmemb == 0.
 * NULL is malloc fails.
 * Pointer to memory allocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + 1) = 0;
	}
	return (ptr);
}
