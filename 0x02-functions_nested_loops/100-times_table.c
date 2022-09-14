#include "main.h"
/**
 * print_times_table - prints 9 times table
 * @n: the value of the times table to be printed
 */
void print_times_table(int n)
{
	int y, i, x;

	if (n >= 0 && n <= 15)
	{
		_putchar('0');

		for (y = 0; y <= n; y++)
		{

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');

				x = i * y;

				if (x <= 99)
					_putchar(' ');
				if (x <= 9)
					_putchar('0');
				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar((x / 10) % 10 + '0');
				}

				else if (x <= 99 && x >= 10)
					_putchar((x / 10) + '0');

				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
