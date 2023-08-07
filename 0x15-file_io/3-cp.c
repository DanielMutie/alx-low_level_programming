#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

void print_error_and_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

void close_fd_and_exit(int code, int fd)
{
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(code);
}

void copy_file(const char *src, const char *dest)
{
	int fd_src, fd_dest, read_count, write_count;
	char buffer[BUF_SIZE];

	fd_src = open(src, O_RDONLY);
	if (fd_src == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", src);

	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dest == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", dest);

	while ((read_count = read(fd_src, buffer, BUF_SIZE)) > 0)
	{
		write_count = write(fd_dest, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
			print_error_and_exit(99, "Error: Can't write to %s\n", dest);
	}

	if (read_count == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", src);

	if (close(fd_src) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);

	if (close(fd_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

