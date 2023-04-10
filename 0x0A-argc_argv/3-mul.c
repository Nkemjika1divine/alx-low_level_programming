#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the result of 2 integers entered in the command line
 *
 * @argc - number of commands
 *
 * @argv - number of arrays
 *
 * Return: 0 if true an 1 if false
 */

int main(int argc, int *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
