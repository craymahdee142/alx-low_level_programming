#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *append_text_to_file - add a text to another text in file
 *@filename: filename
 *@text_content: string to add
 *Description: add another text to already existed file
 *Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a"); /* Open file in append mode*/
	if (fp == NULL)
		return (-1);
	if (text_content != NULL) /* Get length of text_content string*/
		count = strlen(text_content);
	if (count > 0)
	{
		if (fputs(text_content, fp) == EOF)
			return (-1);
	}
	fclose(fp);
	return (1);
}
