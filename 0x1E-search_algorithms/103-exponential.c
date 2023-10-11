#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array via binary search
  *@array: A pointer to the first element of the array to search.
  *@left: The starting index of the [sub]array to search.
  *@right: The ending index of the [sub]array to search.
  *@value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1); /* value not found */
}


/**
  *exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  *@array: A pointer to the first element of the array to search.
  *@size: The number of elements in the array.
  *@value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t right;

	if (array == NULL)
		return (-1);
	/* perform expo seacrh if first element is not the target */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine the reange where is expected */
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
