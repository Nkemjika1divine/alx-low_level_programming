#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 *			standard output.
 *
 * @filename: textfile to be read and printed
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if filename is null or if write function does not write thr
 * 		correct number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(a, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(a);
	return (b);
}
