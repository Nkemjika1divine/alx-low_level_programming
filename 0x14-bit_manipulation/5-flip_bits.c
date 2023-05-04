#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *			to get from one number to another
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int a, count = 0;
	unsigned long int curr;
	unsigned long int b = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = b >> a;
		if (curr & 1)
			count++;
	}
	return (count);
}
