#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0(success), 1(error)
 */

int main(int argc, char **argv)
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;

	printf("%i\n", mul);
	return (0);
}
