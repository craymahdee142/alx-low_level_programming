#include "search_algos.h"

/**
 *interpolation_search - Searches value in arrays via linear search
 *@array: Pointer to the first element
 *@size: number of element in array
 *@value: Value to search for
 *Return: first index where value, else -1 if value is not found or NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
