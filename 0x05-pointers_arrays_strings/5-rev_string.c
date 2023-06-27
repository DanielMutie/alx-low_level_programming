#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int i, length;
	char temp;

	length = 0;
	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

