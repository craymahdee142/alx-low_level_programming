#include "main.h"

/**
* swap_int - Function that swaps the values of two integers
* @a: integer to swap
* @b: integer to swap
* Return: 0 (success)
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
