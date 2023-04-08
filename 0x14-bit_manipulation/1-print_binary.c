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
	int i = 0, count = 0;

	for (i = 31; i >= 0; i--)
	{
		_putchar((num >> i) & 1 ? '1' : '0');
		count++;
	}
	if (count == 0)
	{
		_putchar('0');
	}
}
