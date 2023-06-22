#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/* Commented out the loop to avoid infinite iteration */
	while (i < 10)
	{
		putchar(i);
		i++; /* Increment the loop variable */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

