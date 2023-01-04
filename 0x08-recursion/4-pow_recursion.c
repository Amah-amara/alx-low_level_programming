#include "main.h"

/**
 * _pow_recursion - return the value of x raised to power y
 * @x: parameter
 * @y: power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow recursion(x, y-1));
	else
		return (1);

}
