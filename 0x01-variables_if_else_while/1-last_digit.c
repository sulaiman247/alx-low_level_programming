#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - this is  a test of if and else statements
 * Return: 0
 */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	int lst_d = n % 10;
	/* your code goes there */
	if (lst_d == 0)
		printf("Last digit of %d is %d and is 0", n, lst_d);
	else if (lst_d < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lst_d);
	else
		printf("Last digit of %d is %d and is greater than 5", n, lst_d);
	return (0);

}
