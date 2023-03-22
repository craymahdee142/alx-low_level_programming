#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - function that prints name using pointer to a func
 *@name: string to add
 *@f: pointer to func
 *Return: noting
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
