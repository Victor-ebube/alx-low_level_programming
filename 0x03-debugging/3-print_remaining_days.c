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
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 2 && day <= 60)
		{
		day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remainingdays: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %2d/%2d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
