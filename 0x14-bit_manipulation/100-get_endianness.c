#include "main.h"

/**
 *get_endianness - function that checks the endianness
 *Return: void
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
