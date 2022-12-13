#include "main.h"

/**
 * print_sign - entry point
 *_islower-checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

