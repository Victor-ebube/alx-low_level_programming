#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the multiplication of two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
	}
	else
		printf("Error\n");
	return (1);
}
