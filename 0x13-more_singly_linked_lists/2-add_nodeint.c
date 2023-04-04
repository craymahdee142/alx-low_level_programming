#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint - Function that adds a new nodes to at the beginning
 *@head: Pointer to a pointer
 *@n: the value to be stored
 *Return: address of  a new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
