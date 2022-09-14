#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_tables(void)
{
	int y, i, x;

	for (y = 0; y <= 9; y++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			x = y * i;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
