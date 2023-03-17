#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply 2 numbers as arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				_putchar("Error\n");
				exit(98);
			}
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	_putchar("%lu\n", mul);
	return (0);
}

