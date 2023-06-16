#include "lists.h"

/**
 *sum_dlistint - add all data of dlistint_t linked list
 *@head: pointer to a node at beginning
 *Return: summ of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum  = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
