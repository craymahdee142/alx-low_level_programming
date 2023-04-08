#include "main.h"
/**
 *clear_bit - function that clears bit to 0
 *@n: Pointer to interger
 *@index: unsigned index
 *Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
