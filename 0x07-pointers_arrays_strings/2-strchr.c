#includ "main.h"

/**
 * *_strchr - function that locates chr in string
 * @s: input
 * @c: input
 * Return: null
**/
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n]>= '\0'; n++)
	{
		if (s[n] == c)
		return (s + n);
	}
	return (NULL);
}
