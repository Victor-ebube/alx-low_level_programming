#include "main.h"
#include <string.h>

/**
* print_rev - print string in reverse
* @s: string
*
* Return: void
*/
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
