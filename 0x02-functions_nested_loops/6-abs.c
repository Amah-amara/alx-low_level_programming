#include "main.h"

/**
 * _abs(int) - computes the absolute value of an integer
 * @n: the int to be operated on
 *
 * Return: returns an unsigned int value to calling function
 */

int _abs(int n);
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
