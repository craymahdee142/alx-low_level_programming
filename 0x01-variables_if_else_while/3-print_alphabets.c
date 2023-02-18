#include <stdio.h>
/**
 * main - A program that prints alphabet in lower and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char b;
	char c;

	b = 'a';
	c = 'A';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
