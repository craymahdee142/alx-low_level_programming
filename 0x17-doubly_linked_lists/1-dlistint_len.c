#include "lists.h"

/**
 *dlistint_len - function that returns the number of element
 *@h: pointer to a start of linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
