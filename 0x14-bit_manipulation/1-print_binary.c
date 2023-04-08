#include "main.h"

/**
 *print_binary - print binary representation
 *@n: unsigned long interger
 *Description: binary represenation
 *Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int i, count = 0;

	for (i = 31; i >= 0; i--)
	{
		if ((num >> i) & 1) /* checks if the i-th bit of num is set to 1 or 0 */
		{
			_putchar('1');
			count++;
		}
		else
			_putchar('0'); /* print 0 is the i-th bit os 0 */
	}
	if (count == 0)
	{
		_putchar('0');
	}
}
