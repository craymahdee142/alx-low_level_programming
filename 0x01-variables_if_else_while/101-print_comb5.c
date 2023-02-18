#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Return: 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 98; i++)
	{
		for (n = i + 1; n <= 99; n++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (i == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
