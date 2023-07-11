#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: On success - Pointer to a newly allocated string containing
 *                     the concatenated arguments.
 *         On failure or if ac is 0 - NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			total_len++;
			len++;
		}
		total_len++;
	}

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[k++] = av[i][len];
			len++;
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}

