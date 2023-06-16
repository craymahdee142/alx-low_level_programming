#include "lists.h"

/**
 *get_dnodeint_at_index - func that returns nth node
 *@head: node pointer
 *@index: integer
 *Return: dlistint_t nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
