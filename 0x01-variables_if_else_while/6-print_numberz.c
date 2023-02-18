#include <stdio.h>
/**
 * main - A program that print all sigle base number
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}


