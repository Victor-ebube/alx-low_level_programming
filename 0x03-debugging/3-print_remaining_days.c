#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are left in the
 * year, taking leap year into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || year % 40 == 0)
	{
		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}

	else
	{
		if (month == 2 && day > 28)
			printf("invalid date");

		else
		{
			printf("day of the year: %d\n", day - 1);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
