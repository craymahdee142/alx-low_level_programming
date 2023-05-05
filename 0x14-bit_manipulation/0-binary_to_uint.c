#include "main.h"

/**
 *binary_to_uint - function that converts binary to an unsigned int
 *@b: Pointing to a string of 0 and 1 chars
 *Description: length of binary string to unit
 *Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	/* check if binary is noy NULL */
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	/* check if binary string is too large */
	if (i > (sizeof(unsigned int) * CHAR_BIT))
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	num = (num << 1) | (b[i] - '0');
	}
	return (num);
}
