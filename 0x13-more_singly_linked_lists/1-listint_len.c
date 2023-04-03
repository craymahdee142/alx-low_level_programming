#include <stdio.h>
#include "lists.h"

/**
 *listint_len - Function that returns the number of lements in linked listint_t
 *@h: Pointer to the head of he list
 *Return: number os elements
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
