#include <stdio.h>

/**
 * main - this program prints all possible combination of single digits
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar(' ');
	{
		if (a == 9)
			putchar(a + '0');
		else
		{
			putchar(a + '0');
			putchar(',');
		}
	}
	return (0);
}
