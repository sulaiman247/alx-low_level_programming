#include <stdio.h>

/**
 * main - printing all alphabets in lowercase to  screeen
 * Return : 0
 */

int main(void)
{
	char c;

	for(c = 'a';c <= 'z'; c++)
	{
		putchar(c);
		putchar(\n);
	}
	return (0);
}
