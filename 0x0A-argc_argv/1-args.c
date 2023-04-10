#include <stdio.h>
#include "main.h"

/**
 * main - this program prints the number of arguments passed to it
 *
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*this line of code makes argv not to work*/

	printf("%d \n", argc - 1); /* this line allows input to the integer argc*/

	return (0);
}
