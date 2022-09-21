#include <stdio.h>

/**
 * main - this is a function that prints the english alphabet from a-z in up
 * uppper and lower case.
 *Return: 0
 */
int main(void)
{
	char b;
	char c;
	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for  (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
