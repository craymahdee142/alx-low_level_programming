#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits.
 * Return: 0 (Success)
*/
int main(void)
{
	int d;
	int d, p;

	for (d = 0; d < 100; d++)
	for (d = '0'; d < '9'; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		for (p = d + 1; p <= '9'; p++)
		{
			putchar(',');
			putchar(' ');
			if (p != d)
			{
				putchar(d);
				putchar(p);
				if (d == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}



