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
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		size_t pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}
	if (array[low] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	printf("Value checked array[%ld] is out of range\n", low);
	/* if value not found */
	return (-1);
}
