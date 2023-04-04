#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node
 *@head: Pointer to the address of the head
 *@idx: the index of the listint where the should be added
 *@n: interger of the new node
 *Return: if the function failss - else address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigend int idx, int n)
{
	listint_t *new_node, *copy = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = copy;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NUUL || copy->next == NULL)
			return (NULL);
	}
	new_node->next = copy->next;
	copy->next = new_node;
	return (NULL);
}
