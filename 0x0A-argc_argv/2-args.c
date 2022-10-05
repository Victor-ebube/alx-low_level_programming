#include <stdio.h>
#include "main.h"
/**
 * main - prints all argument giving to it
 * @argc: argument count
 * @argv: argument vectot=or
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
