#include "main.h"
#include <stdio.h>

/**
 *read_textfile - function that read a file
 *@filename: pointer to the file name
 *@letters: number of char to be read
 *Return: 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t count = 0;
	char c;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((count < letters) && (c = fgetc(fp)) != EOF)
	{
		fputc(c, stderr);
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
