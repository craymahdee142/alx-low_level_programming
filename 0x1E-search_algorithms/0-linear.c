#include "search_algos.h"

/**
 *linear_search - Searches value in arrays via linear search
 *@array: Pointer to the first element
 *@size: number of element in array
 *@value: Value to search for
 *Return: first index where value, else -1 if value is not found or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* check i array is Null */
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	/* if value not found */
	return (-1);
}
