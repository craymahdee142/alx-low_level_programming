#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - functions that frees listint list
 *@head: Pointer to pointer address
 *Return: Pointer head equals NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
