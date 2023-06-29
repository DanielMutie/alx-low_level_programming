#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1;
	int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num = n;

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}
}

