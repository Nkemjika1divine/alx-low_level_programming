#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that prints a single character
 *
 * @c: The character being printed
 *
 * Return: 1 if sucessful.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
