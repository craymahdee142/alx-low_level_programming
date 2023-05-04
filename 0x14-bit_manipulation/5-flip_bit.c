#include "main.h"
#include <stdio.h>

/**
 *flip_bits - function that returns the number of bit
 *@n: unsigned long int
 *@m: unsigned long int
 *Return: 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, nflips = 0;
	unsigned long int num = n ^ m;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		/* check if the i-th bit of num is set */
		if ((num & (1UL << i)) != 0)
		nflips++;
	}
	return (nflips);
}

