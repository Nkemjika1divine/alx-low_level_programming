#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - check if string there are digit
 * @str: array str
 *
 * Return: 0 on Success
 */

int check_num(char *str)
{
	/*Declare variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count the string*/
/*check if the strings there are digits*/
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}


/**
 * main - This program adds positive numbers only
 *
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: 0 but 1 if error
 */

int main(int argc, char *argv[])

{
	int a;
	int str_to_int;
	int sum = 0;

	a = 1;
	while (a < argc)
	{
		if (check_num(argv[a]))
		{
			str_to_int = atoi(argv[a]); /*atoi convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}

