#include "main.h"

/**
 * int factorial - function that returns a factorial of a given num
 *@n: number to return
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
