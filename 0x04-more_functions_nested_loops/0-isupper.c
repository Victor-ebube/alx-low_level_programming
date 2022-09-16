#include "main.h"

/**
* _isupper - checks if alphabet letter is uppercase
* @c: alphabet
*
* Return: 1 true, 0 false
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
