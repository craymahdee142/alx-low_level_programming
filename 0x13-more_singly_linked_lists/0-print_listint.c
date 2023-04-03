#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print all elements in listint
 *@h: listint_t list
 *Return: The  number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes  = 0;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->next);
		h = h->next;
	}
	return (nodes);
}
