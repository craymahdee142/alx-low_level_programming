#include "main.h"
/**
 * _islower - a function that checks for lowercase charater
 * Return: 1 if int c is lowercase, 0 if otherwise
 * @c: is the char to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

