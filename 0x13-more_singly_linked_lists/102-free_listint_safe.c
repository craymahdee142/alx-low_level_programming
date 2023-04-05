#include "lists.h"

/**
 *free_listint_safe - prints list
 *@h: address of pointer to first node
 *Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *head, *tmp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		count++;
		diff = head->next - head;
		tmp = head;
		free(tmp);
		if (diff >= 0)
			braek;
		head = head->next;
	}
	return (count);
}
