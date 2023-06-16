#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	/* Print the alphabet in lowercase, followed by a new line */
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

