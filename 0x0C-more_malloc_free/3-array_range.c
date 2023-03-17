#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates an array of intergers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to newly craeted array
 *NULL if malloc fails.
 *NULL is min > max
 */
int *array_range(int min, int max)
{
	int range;
	int *ptr;
	int i;

	range = 0;
	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
} 
