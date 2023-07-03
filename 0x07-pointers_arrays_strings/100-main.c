#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Tests the set_string function by setting the value of a pointer to a char.
 *              Prints the original and updated strings.
 *
 * Return: Always 0
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("Original strings:\n");
	printf("s0: %s\n", s0);
	printf("s1: %s\n", s1);

	set_string(&s1, s0);

	printf("\nUpdated strings:\n");
	printf("s0: %s\n", s0);
	printf("s1: %s\n", s1);

	return (0);
}

