#include <stdio.h>

/**
 * main - print all alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'q' || s == 'e')
			continue;
		else
			putchar(s);
	}
	putchar('\n');
	return (0);
}
