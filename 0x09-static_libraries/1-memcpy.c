#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the pointers pointer
 * @src: the pointer
 * @n: number of byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}
	return (dest);
}
