#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that performs simple operation
 *@argc: number of argument
 *@argv: array of argument
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*func)(int, int);
	
	char *get_op;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	get_op = argv[2];

	if (get_op_func(get_op) == NULL || get_op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' && num2 == 0) || (*get_op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = func(num1, num2);
	printf("%d\n", res);
		return (0);
}
