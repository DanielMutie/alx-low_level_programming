#include "main.h"

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

