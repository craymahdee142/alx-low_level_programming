#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: size of memoery to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
