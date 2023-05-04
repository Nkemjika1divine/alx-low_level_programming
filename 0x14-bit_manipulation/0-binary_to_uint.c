#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)

{
	int a;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[a] - '0');
	}

	return (decimal_val);
}
