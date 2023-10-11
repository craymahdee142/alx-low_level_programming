#include "search_algos.h"

/**
 *jump_search - Searches value in arrays via linear search
 *@array: Pointer to the first element
 *@size: number of element in array
 *@value: Value to search for
 *Return: first index where value, else -1 if value is not found or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = 0;
	size_t jump = sqrt(size);
	/* check i array is Null */
	if (array == NULL && size == 0)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* if value not found */
	return (-1);
}
