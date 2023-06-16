#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node a specified position
 *@h: pointer
 *@idx: index
 *@n: integer
 *Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/*check if idx is 0, then insert at begiining */
	if (idx == 0)
	{
		/* call add_dnodeint funct to insert at beginn. */
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (current != NULL)
	{
		/* check if current @ last and idx is next */
		if (current->next != NULL && count == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
	/* if idx - 1 equals count, found desired position */
		else if (idx - 1 == count)
		{
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
