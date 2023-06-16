#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	uppercase = 'A';
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}

