#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - function that add node
 *@head: Pointer to the head
 *@n: interger node to add
 *Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	if (head == NULL)
	return (NULL);
	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* new_node to end */
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	last_node = *head;
	while (last_node->next != NULL)
	{
	last_node = last_node->next;
	}
	last_node->next = new_node;
	}
	return (new_node);
}
