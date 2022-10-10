#include <stdio.h>

/**
 * main - print the first arguments
 *  passed to commandline.
 *
 * @argc: counts the number of arguments passed
 * @argv: store the array of strings
 *
 * Return: 0
 */

int main( __attribute__((unused))int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
