#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int check_num(char *str)

/**
 * main - This program adds positive numbers
 *
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: 1 if error
 */

int main(int argc, char *argv[]);

{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < 1)
	{
		if (check_num(argv[count]))
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
	{
		printf("%d\n", sum);
		return (0);
	}
}
