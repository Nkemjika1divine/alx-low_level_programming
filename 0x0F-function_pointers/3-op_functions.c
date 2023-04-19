#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sums two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: sum
 */

int op_add(int a, int b)

{
	return (a + b);
}



/**
 * op_sub - subtracts a number from another
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: difference
 */

int op_sub(int a, int b)

{
	return (a - b);
}




/**
 * op_mul - multiplies two numbers
 *
 * @a:  number 1
 * @b:  number 2
 *
 * Return: product
 */

int op_mul(int a, int b)

{
	return (a * b);
}



/**
 * op_div - divides number using another number
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}



/**
 * op_mod - Returns remainder of division
 *
 * @a: number 1
 * @b: number 1
 *
 * Return: remainder of the division of a by b.
 */

int op_mod(int a, int b)

{
	return (a % b);
}
