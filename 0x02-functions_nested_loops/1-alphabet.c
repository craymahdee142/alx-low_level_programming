#include "main.h"
/**
* print_alphabet - print all lowercase letters
* Return: 0 (Success)
*/
void print_alphabet(void)
{
	char letter_lc;

	for (letter_lc = 'a'; letter_lc <= 'z'; letter_lc++)
	{
		_putchar(letter_lc);
	}
	_putchar('\n');
}
