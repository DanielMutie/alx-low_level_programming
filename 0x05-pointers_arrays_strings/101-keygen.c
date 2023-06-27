#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = (rand() % 94) + 33;
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Tada! Congrats\n");
	fprintf(stderr, "%s\n", password);

	return (0);
}

