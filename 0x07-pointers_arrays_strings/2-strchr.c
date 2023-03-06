#includ "main.h"

/**
 * *_strchr - function that locates chr in string
 * @s: input
 * @c: input
 * Return: null
**/
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
