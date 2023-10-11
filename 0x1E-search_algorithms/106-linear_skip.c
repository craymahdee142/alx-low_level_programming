
#nclude "search_algos.h"

/**
 *linear_skip - Searched for a value in a skip list
 *@list: Input list
 *@value: Value to search in
 *Return: A pointer to anode with matching value or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	current = list;
	express = list->express;

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (!express || express->n >= value)
		{
			printf("Value checked at index [%lu] = [%lu]\n", current->index,
					(express ? express->index : 0));
			skiplist_t *temp = current;

			while (temp)
			{
				printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
				if (temp->n == value)
					return (temp);
				temp = temp->next;
			}
		}
		current = express;
		express = (express ? express->express : NULL);
	}
	return (NULL);
}
