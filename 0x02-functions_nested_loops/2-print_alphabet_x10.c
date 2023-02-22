#include "main.h"
/**
* print_alphabet_x10 - print 10 times alphabet in lowercase
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar(i);
		i++;
	}
}
