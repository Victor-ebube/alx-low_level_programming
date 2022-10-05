#include <stdio.h>
#include "main.h"
/**
 * main - prints number of argument
 * @argc: argument count
 *@argv: argument vector
 *Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
