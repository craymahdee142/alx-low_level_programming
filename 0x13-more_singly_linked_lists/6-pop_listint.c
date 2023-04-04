#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - delete the head node of listint and returns the head node data
 *@head: Address of the pointer
 *Return: Interger if success
 */
int pop_listint(listint_t **head)
{
	int my_data;
	listint_t tmp;

	if (*head == NULL)
	return (0);
	tmp = *head;
	my_data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (my_data);
}
