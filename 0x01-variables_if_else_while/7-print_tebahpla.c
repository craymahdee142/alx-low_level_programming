#include <stdio.h>
/**
 * main - A program that prints lower alpahbet in reverse
 * Return: 0 (Sucess)
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

