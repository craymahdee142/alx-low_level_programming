#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
* main - copies the content of one file to another
* @argc: argument count
* @argv: arguments passed
*
* Return: 1 on success, exit otherwise
*/
int main(int argc, char *argv[])
{
int src, dest, n_read, wrote, close_src, close_dest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}

src = open(argv[1], O_RDONLY);
if (src == -1)
{
perror("Error opening file for reading");
exit(EXIT_FAILURE);
}
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
if (dest == -1)
{
perror("Error opening file for writing");
exit(EXIT_FAILURE);
}

while ((n_read = read(src, buffer, sizeof(buffer))) > 0)
{
wrote = write(dest, buffer, n_read);
if (wrote == -1)
{
perror("Error writing to file");
exit(EXIT_FAILURE);
}
}

if (n_read == -1)
{
perror("Error reading from file");
exit(EXIT_FAILURE);
}

close_src = close(src);
if (close_src == -1)
{
perror("Error closing file descriptor for input file");
exit(EXIT_FAILURE);
}

close_dest = close(dest);
if (close_dest == -1)
{
perror("Error closing file descriptor for output file");
exit(EXIT_FAILURE);
}

return (0);
}
