#include <stdio.h>
#include <stdlib.h>

/**
 *main - func with two arguments
 *@argc: int argument
 *@argv: char argument
 *Description: prints opcodes
 *Return: Na
 */
int main(int argc, char **argv)
{
	int count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (count = 0; count < argv[1]; count++)
	{
		printf("%02x", *((unsigned char *)main + count));
	}
	if (atoi(argv[1] > count)
	{
		printf(" ")'
	}
	printf('\n')'
	return (0);

}
