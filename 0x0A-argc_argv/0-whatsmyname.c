#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints name
 * @argc: argument count
 * @argv: argument array
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
	exit(EXIT_SUCCESS);
}
