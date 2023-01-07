#include <stdio.h>

/**
 * main - prints the arguments it receives
 * @argc: count arguments
 * @argv: the arguments
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
