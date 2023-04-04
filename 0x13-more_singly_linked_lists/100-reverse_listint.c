#include "lists.h"

/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the first node in the list
 *Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *current == NULL)
		return (NULL);
	prev = NULL;
	while ((*cureent)->next != NULL)
	{
		current = (*current)->next;
		(*current)->next = prev;
		prev = *current;
		*current = current;
	}
	(*head)->next = prev;
	return (*head);
}
