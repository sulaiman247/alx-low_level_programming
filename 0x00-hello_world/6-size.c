#include <stdio.h>
/**
 * main - this is used to print sizes of various data types.
 * Return: 0
 */
int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int li = sizeof(long int);
	int lli = sizeof(long long int);
	int fl = sizeof(float);

	printf("Size of a char: %d byte(s)", c);
	printf("Size of an int: %d byte(s)", i);
	printf("Size of a long int: %d byte(s)", li);
	printf("Size of a long long int: %d byte(s)", lli);
	printf("Size of a float: %d byte(s)", fl);
	return (0);
}
