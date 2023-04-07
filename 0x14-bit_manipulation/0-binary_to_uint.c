#include "main.h"

/**
 *binary_to_unit - function that converts binary to an unsigned int
 *@b: Pointing to a string of 0 and 1 chars
 *Description: length of binary string to unit
 *Return: converted number
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1; /* equivalent to  num = num * 2*/
		num += b[i] == '1'; /* if b[i] is 1 add 1 to num otherwise add 0*/
	}
	return (num);
}

