#include "main.h"

/**
 * check - checks for square root
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (check(a, b + 1));
	return (1);
}

/**
 * _sqrt_recursion - returns the natural root of number
 * @n: integer to find square root
 * Return: naturalsquare root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check(1, n));
}
