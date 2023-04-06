#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - function that returns the no of elements in a listint_t list
 *@h: pointer to a address
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;

	}
	return (count);

}

/**
 *insert_nodeint_at_index - function to insert a new node at a given position
 *@head: pointer to the beginning of a listint_t list
 *@idx: index where new will be added
 *@n: nember for the new node
 *Return: address of the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len;
	unsigned int j;
	listint_t *previous = *head, *recent;

	len = listint_len(*head);

	if (idx > len)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (recent == NULL)
		return (NULL);
	recent->n = n;

	if (idx == 0)
	{
		recent->next = *head;
		*head = recent;
		return (recent);
	}
	for (j = 0; j < idx - 1; j++)
		previous = previous->next;
	recent->next = previous->next;
	previous->next = recent;
	return (recent);

}
}
