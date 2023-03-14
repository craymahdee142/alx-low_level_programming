#include "main.h"
#include <stdlib.h>

/**
 * * _strdup - function that returns a pointer to a newly allocated memory
 *@str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	ptr =  malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = str[i];
	return (ptr);
}
