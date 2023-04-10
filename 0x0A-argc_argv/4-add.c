#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program adds positive numbers
 *
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: 0 but 1 if error
 */

int main(int argc, char *argv[])

{
	int a;
	int num;
	int result;

	for (a = 1; a < argc; a++)
	{
		num = atoi(argv[a]);
		result = result + num;
		if (*argv[a] < '0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
