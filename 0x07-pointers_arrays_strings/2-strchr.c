#includ "main.h"

/**
 * *_strchr - function that locates chr in string
 * @s: input
 * @c: input
 * Return: null
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);

}
