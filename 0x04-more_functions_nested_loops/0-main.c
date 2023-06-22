#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char c;
    int result;

    c = 'A';
    result = _isupper(c);
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(result + '0');
    _putchar('\n');

    c = 'a';
    result = _isupper(c);
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(result + '0');
    _putchar('\n');

    return (0);
}


