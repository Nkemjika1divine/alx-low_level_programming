#include <stdio.h>

/**
 * main - this program prints all numbers in base 16
 *
 * Return: 0
 */

int main(void)
{
	int a;
	char i;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
