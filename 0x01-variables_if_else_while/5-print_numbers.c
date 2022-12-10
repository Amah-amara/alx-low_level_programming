#include <stdio.h>
#include <stdlib.h>

/**
 * main = base 10 digits returned
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar("\n");

	return (0);

}
