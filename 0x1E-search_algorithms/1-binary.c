#include "search_algos.h"

/**
 *binary_search - Searches value in arrays via linear search
 *@array: Pointer to the first element
 *@size: number of element in array
 *@value: Value to search for
 *Return: first index where value, else -1 if value is not found or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	/* check i array is Null */
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		/* check if mid element is greater than the value */
		if (array[mid] > value)
			right = mid - 1; /* update the right boundary */
		else
			left = mid + 1; /* else, update the left boundary */
	}
	/* if value not found */
	return (-1);
}
