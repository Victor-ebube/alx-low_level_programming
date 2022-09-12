#include <stdio.h>
/**
 * main - single base 10 digits using only "putchar" function  twice
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');

	return (0);
}

