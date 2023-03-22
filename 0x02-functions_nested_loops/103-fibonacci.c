#include <stdio.h>

/**
 * main - prints thesum of even fibonacci numb ers
 * less than 4000000
 * Return: 0
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 400000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
