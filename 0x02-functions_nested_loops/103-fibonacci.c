#include <stdio.h>
/**
 * main - prints sum of even valued fibonacci sequence
 * Return: always 0
 */
int main(void)
{
	float i;
	unsigned long a = 0, b = 1, sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum  % 2) == 0)
			i += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", i);

	return (0);
}
