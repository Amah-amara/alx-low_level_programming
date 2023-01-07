#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
