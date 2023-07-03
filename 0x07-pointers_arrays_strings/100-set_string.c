#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the string to be modified.
 * @to: Pointer to the string to set the value to.
 *
 * Description: This function sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

