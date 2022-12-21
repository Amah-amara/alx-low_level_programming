#include "main.h"

/**
 * _strncat - a similar function that concatenates two strings
 * @dest: first param
 * @src: second param
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
