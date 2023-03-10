#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed
 *@argc: count arguments
 *@argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
