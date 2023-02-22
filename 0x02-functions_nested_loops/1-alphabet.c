#include "main.h"
 /**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: 0
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
