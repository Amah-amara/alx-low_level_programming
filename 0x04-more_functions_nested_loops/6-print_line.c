#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the parameter
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
