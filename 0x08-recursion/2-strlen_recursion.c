#include "main.h"

/**
 * _strlen_recursion - function that returns length of string
 *@s: string length
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
