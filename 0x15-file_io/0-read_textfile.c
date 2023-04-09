#include "main.h"
/**
 *read_textfile - function that read a file
 *@filename: Pointer to the name of file
 *@letters: number of char to read from the file
 *Return: 0 (success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	size_t count = 0;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	while ((count < letters) && (c = fgetc(fp)) != EOF)
	{
		putchar(c);
		count++;
	}
	if (ferror(fp) != 0)
	{
		fclose(fp);
		return (0);
	}
	fclose(fp);
	return (count);
}
