#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s : pointer to the memory area
 * @n : bytes of the memory area ponted to
 * @b: constant to be filled
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
