#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: start number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n  > 90)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
