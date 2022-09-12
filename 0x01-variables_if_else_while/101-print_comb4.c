#include <stdio.h>
/**
 * main - prints non repeated three digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, x, y;

	for (i = 0; i < 8; i++)
	{
		for (x = i + 1; x < 9; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar(i + '0');
				putchar(x + '0');
				putchar(y + '0');
				if (i == 7 && x == 8 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
