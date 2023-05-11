#include "main.h"
/** 
 *void copyFile - func that copies data
 *@sourceFile: source file
 *@destiantionFile: destination file
 *Description: copy content
 */
void copyFile(const char *sourceFile, const char destinationFile)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	/* symbolic constants for permission bit for group, owner and others */
	mode_t permissions = S_IRUSR | S_IWGRP | S_IROTH;

	
	/* open the source file for reading */
	fd_from = open(sourceFile, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERR, sourceFile);
		exit(98);
	}
	/* open a destination file for writing */
	fd_to = open(destination, O_CREAT | O_TRUNC | O_WRONLY, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERR, destinationFile);
		exit(99);
	}
	/* read data from source and write to destination */
	while (bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, WRITE_ERR, destinationFile);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, READ_ERR, sourceFile);
		exit(98);
	}
	/* close source file */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_from);
		exit(100);
	}
	/* close destination file */ 
	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, CLOSE_ERR, fd_to);
	exit(100);
	}
	return (0);
}	
/**
 *main - copy content of file_from to file_to
 *@argc: num of arguments
 *@argv: arguments
 *Return: 0 on sucess, error or failure
 */
int main(int argc, char *argv[])
{
	/* check if the number of arguments paased is correct */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copyFile(argv[1], argv[2]);
	return (0);
}
