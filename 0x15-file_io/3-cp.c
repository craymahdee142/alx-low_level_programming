#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *int main - cp file_from file_to
 *@argc: argument count
 *@argv: argument string
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	int count = 0;
	char *text;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file from file_to\n");
		exit(97);
	}
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	fp1 = fopen(file_from, "r");
	if (fp1 == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	text = (char *)malloc(1025 * sizeof(char));
	if (text == NULL)
	{
		fprintf(stderr, "Error: Failed to alloacte memory\n");
		exit(99);
	}
	while ((count = fread(text, sizeof(char), 1024, fp1)) > 0)
	{
		text[count] = '\0';
		if (fputs(text, stdout) < 0)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (ferror(fp1))
	{
		fprintf(stderr, "Error: Failed to read from file %s\n", file_from);
		exit(98);
	}
	fclose(fp1);
	fp2 = fopen(file_to, "w");
	if (fp2 == NULL)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	if (fclose(fp2) == EOF)
	{
		fprintf(stderr, "Error: Can't close file descripter %d\n", fileno(fp2));
		exit(100);
	}
	free(text);
	return (0);
}

