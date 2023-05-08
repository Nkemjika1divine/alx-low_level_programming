#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buff(char *filename);
void close_file(int fd);


/**
 * main - this program copies contens of a file to another
 *
 * @argc: number of arguments
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])

{
	int f, t, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(t, buffer, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(f, buffer, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(f);
	close_file(t);

	return (0);
}


/**
 * create_buff - function that assigns 1024 bytes to a buffer
 *
 * @filename: name of file
 *
 * Return: pointer to new buffer.
 */

char *create_buff(char *filename)

{
	char *a;

	a = malloc(sizeof(char) * 1024);
	if (a == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (a);
}



/**
 * close_file - Closes file descriptors.
 *
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
