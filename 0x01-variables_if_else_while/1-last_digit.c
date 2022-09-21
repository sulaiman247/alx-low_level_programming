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

	int lst;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lst = n % 10;
	/* your code goes there */
	if (lst == 0)
		printf("Last digit of %d is %d and is 0", n, lst);
	else if (lst < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lst);
	else
		printf("Last digit of %d is %d and is greater than 5", n, lst);

	return (0);

}
