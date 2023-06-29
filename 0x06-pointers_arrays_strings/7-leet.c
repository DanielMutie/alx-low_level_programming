#include "main.h"

/**
 * leet - Encode a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_encoding[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (leet_letters[j] != '\0')
		{
			if (str[i] == leet_letters[j])
				str[i] = leet_encoding[j];
			j++;
		}
		i++;
	}

	return (str);
}

