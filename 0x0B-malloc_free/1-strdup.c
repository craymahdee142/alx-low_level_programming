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
	int i, len;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	ptr = (char *)malloc((len + 1) * sizeof(char);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
