#include "main.h"

/**
 * _isalpha - checks if c is a letter and returns 1
 * @c: unsigned int value to be compared with ASCII value
 *
 * Return: 1 if alphabet otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
