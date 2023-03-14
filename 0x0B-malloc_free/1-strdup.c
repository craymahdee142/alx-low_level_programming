#include "main.h"
#include <stdlib.h>

/**
 * * _strdup - function that returns a pointer to a newly allocated memory
 *@str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = (char *) malloc((size + 1) * sizeof(char);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
