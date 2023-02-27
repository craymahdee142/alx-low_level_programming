#include "main.h"

/**
* _puts - Function that prints string
* @str: string to print
* Return: string
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
