#include <stdio.h>
#include "lists.h"

/** 
 *print_listint - print all elements in listint
 *@h: listint_t list
 *Return: The  number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	size_t value  = 0;
	const listint_t *current = h;

	for (value = 0; current != NULL; value++)
	{
		printf("%d\n", current->next);
		current = current->next;
	}
	return (value);
}
