#include <stdio.h>
#include "main.h"

/**
 * main - this proram prints the arguments it recieves in the
 * command line
 *
 * @argc: number of arguments
 *
 * @argv: number of arrays
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s \n", argv[a]);
	}
	return (0);
}
