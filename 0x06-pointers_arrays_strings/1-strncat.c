/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to be used.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int dest_len = 0;

	/* Find the length of dest */
	while (*ptr)
	{
		ptr++;
		dest_len++;
	}

	/* Append src to dest */
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add null terminator */
	if (n >= 0)
		*ptr = '\0';

	return (dest);
}

