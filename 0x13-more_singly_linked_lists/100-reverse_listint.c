#include "lists.h"

/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the first node in the list
 *Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;
	return (*head);
}
