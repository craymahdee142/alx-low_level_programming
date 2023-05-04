#include "main.h"

/**
 *set_bit - function that set the value of bit to 1 at a given index
 *@n: Pointer to unsigned long int
 *@index: unsigned index
 *Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	*n |= 1UL << index; /* set the bit at the given index position */
	return (1); /* if it works */
}

