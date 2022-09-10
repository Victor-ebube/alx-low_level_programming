#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * 0 - zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("last_digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit < 6 && != 0)
		printf("last_digit of %d is %d and is less than 6 not 0\n", n, last_digit);
	else
		printf("last_digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
