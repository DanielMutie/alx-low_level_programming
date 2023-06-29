#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int i, j, carry = 0, sum;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	r[size_r] = '\0';
	len1--;
	len2--;
	i = size_r - 1;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';

		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		r[i--] = (sum % 10) + '0';
	}

	if (carry != 0 && i >= 0)
		r[i--] = carry + '0';

	if (i < 0)
		return (0);

	return (&r[i + 1]);
}

