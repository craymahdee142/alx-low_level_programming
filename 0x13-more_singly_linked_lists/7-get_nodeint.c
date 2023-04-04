#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - function that returns nth node
 *@head: Address of the pointer
 *@index: Position of the first node
 *Return: node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigend int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
