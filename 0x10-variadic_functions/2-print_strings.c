#include "variadic_functions.h"

/**
 *print_stings - print strings
 *@sepeartor:string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
	if (sepeartor != NULL && i != 0)
	printf("%s", sepaertor);
	p = va_arg(valist, char *);
	printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf('\n');
	va_end(valist);
}
