#include <stdio.h>
/**
 * main - prints the first 98 fibonacci sequence
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long f1, f2, f3, f4;
	unsigned long a = 0, b = 1, sum;
	unsigned long x, y;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
	f1 = a / 10000000000;
	f3 = b / 10000000000;
	f2 = a % 10000000000;
	f4 = b % 10000000000;
	for (i = 93; i < 99; i++)
	{
		x = f1 + f3;
		y = f2 + f4;
		if (f2 + f4 > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}
		printf("%lu%lu", x, y);
		if (i != 98)
			printf(", ");
		f1 = f3;
		f2 = f4;
		f3 = x;
		f4 = y;
	}
	printf("\n");
	return (0);
}
