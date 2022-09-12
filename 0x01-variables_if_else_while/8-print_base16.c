#include <stdio.h>
/**
 * main - prins all base 16 numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 16) + '0');
	for (i = 'a'; i < 'g'; i++)
		putchar(i)
	putchar('\n');

	return (0);
}
