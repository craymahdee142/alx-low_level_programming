#includ "main.h"

/**
 * *_strchr - function that locates chr in string
 * @s: input
 * @c: input
 * Return: null
**/
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}

	return (NULL);

}
