#include "main.h"

/**
 *get_bit - return value of bit at given index
 *@n: decimal input
 *@index: index
 *Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
	{
		return (-1);
	}
	i = (1 << index);
	return ((n & i) ? 1 : 0);
}
