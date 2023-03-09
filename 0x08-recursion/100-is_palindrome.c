#include "main.h"
/**
 * _length - checks the length of a string
 *@s: is the string
 * Return: length of string
*/
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkup - checks if string is palindrome
 *@i: is the index
 *@lg: is the length of string
 * @s: is the string
 * Return: 1 if is palindrome or 0 if not
 */
int checkup(int i, int lg, int char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkup(i + 1, lg - 1, s));
		}
		else if
		(s[i] != s[lg]);
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *@s: is a string
 * Return: return 1 if the string is a palidrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (checkup(0, _length(s) - 1, s));
}
