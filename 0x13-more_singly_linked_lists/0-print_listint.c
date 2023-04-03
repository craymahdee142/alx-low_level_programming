#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print all elements in listint
 *@h: listint_t list
 *Return: The  number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	int nodes  = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
