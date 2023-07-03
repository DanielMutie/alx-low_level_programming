#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix.
 * @size: The size of the matrix.
 *
 * Description: This function prints the sum of the two diagonals of a square
 * matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* Diagonal from top-left to bottom-right */
		sum2 += *(a + i * size + (size - 1 - i)); /* Diagonal from top-right to bottom-left */
	}

	printf("%d, %d\n", sum1, sum2);
}

