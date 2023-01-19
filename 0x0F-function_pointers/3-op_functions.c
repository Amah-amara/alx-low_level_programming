#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates subtraction of two int
 * @a: first integer
 * @b: second integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates mproduct of two integers
 * @a: param1
 * @b: param2
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: calculates division of two ints
 * @a: param1
 * @b: param2
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of division of two ints
 * @a: param1
 * @b: param2
 */
int op_mod(int a, int b)
{
	return (a % b);
}
