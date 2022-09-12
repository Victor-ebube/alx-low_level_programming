#include <stdio.h>
/**
 * main - prints combination of two 2 digit numbers without
 * repetition of same combination
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, x;

	for (i = 0; i <= 98; i++)
	{
		for (x = i + 1; x <= 99; x++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (i == 98 && x == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}



