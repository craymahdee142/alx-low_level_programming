#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *create_file - function that create file
 *@filename: name of file
 *@text_content: string to write
 *Return: 1 (Success) or -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w+");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
		count = strlen(text_content);
	if (count > 0)
	{
		if (fputs(text_content, fp) == EOF)
		return (-1);
	}
	fclose(fp);
	return (1);

}
