i#include "function_pointers.h"

/**
 *int_index - search for intergers
 *@array: array with data
 *@size: size of array
 *@cmp: func pointer
 *Return: intergers count
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array)[i] != 0)
			return (0);
		}
	}
	return (-1);
}