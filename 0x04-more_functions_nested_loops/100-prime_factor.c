#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int largest_prime = 2;

	while (number % 2 == 0)
		number /= 2;

	for (unsigned long int i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
	}

	if (number > largest_prime)
		largest_prime = number;

	printf("%lu\n", largest_prime);

	return (0);
}

