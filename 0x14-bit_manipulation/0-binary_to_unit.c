#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 *binary_to_unit - function that converts binary to an unsigned int
 *@b: Pointing to a string of 0 and 1 chars
 *Description: length of binary string to unit
 *Return: converted number
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int i, power = 0;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num += (unsigned int)(b[i] - '0') * (unsigned int)pow(2, power);
		power++;
	}
	return (num);
}

