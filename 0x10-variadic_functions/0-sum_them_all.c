#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - func that return the sum of all parameters.
 *@n: n arg
 *Return: sum or if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
