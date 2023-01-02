#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row;

	for (row = 0; row < size; row++)
	{
		diagonal_sum_1 += a[(size + 1) * row];
		diagonal_sum_2 += a[(size - 1) * (row + 1)];
	}
	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);

}
