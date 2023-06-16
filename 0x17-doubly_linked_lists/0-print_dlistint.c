#include "lists.h"

/**
 *print_dlistlint - prints all element of a dlistlint
 *@h: pointer to a start of linked list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
