#include "main.h"

/**
 * factorial - function that returns a factorial of a given num
 *@n: number to return
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
