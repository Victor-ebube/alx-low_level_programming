#include "main.h"
/**
 * _islower - lowercase checker
 *
 * @c: character to be checked
 *
 * Return: as specified
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

