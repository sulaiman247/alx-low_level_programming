#include <stdio.h>

/**
 * _puts_recursion(char *s) - this is a function that print a string output using recursion.
 * @*s : tis is a string parameter.
 *
 * Return : nothing.
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	_putchar('\n');

	_putchar(*s);

	_puts_recursion(s + 1);
}

