#include <stdio.h>
/**
 * main - print non repeated 2 digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 9; i++)
	{
		for  (x = i + 1; x <= 9; x++)
		{
			putchar(i + '0');
			putchar(x + '0');
			if (i == 8 && x == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
