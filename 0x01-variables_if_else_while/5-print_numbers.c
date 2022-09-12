#include <stdio.h>
/**
 * main - single digit of base 10
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		i = i % 10;
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
