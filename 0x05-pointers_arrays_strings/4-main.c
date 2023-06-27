#include "main.h"
/**
 * main - Entry point of the program.
 *        Tests the print_rev function.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}

