#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    int source_fd, dest_fd, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
        exit(1);
    }

    source_fd = open(argv[1], O_RDONLY);
    if (source_fd == -1) {
        perror("open");
        exit(2);
    }

    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);
    if (dest_fd == -1) {
        perror("open");
        exit(3);
    }

    while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written == -1) {
            perror("write");
            exit(4);
        }
    }

    if (bytes_read == -1) {
        perror("read");
        exit(5);
    }

    if (close(source_fd) == -1) {
        perror("close");
        exit(6);
    }

    if (close(dest_fd) == -1) {
        perror("close");
        exit(7);
    }

    return 0;
}
