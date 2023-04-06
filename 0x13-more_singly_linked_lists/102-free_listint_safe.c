#include "lists.h"
#include <stdlib.h>
size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 *looped_listint_count - counts number of unique nodes
 *@head: Pointer to the head
 *Return: 0 if the list is not looped else, unique codes
*/
size_t looped_listint_count(listint_t *head)
{
	listint_t *tot, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tot = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tot == hare)
		{
			tot = head;
			while (tot != hare)
			{
				nodes++;
				tot = tot->next;
				hare = hare->next;
			}
			tot = tot->next;
			while (tot != hare)
			{
				nodes++;
				tot = tot->next;
			}
			return (nodes);
		}
		tot = tot->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 *free_listint_safe - free a listint_t safely
 *@h: Pointer to address
 *Return: size of list bto be freed
 *Description: The function sets to head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, i;

	nodes = looped_listint_count(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
