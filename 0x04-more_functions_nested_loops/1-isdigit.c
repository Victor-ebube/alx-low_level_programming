#include "main.h"
/**
* _isdigit - checks if a character is digit
* @c: character
*
* Return: 1 (True), 0 (False)
*/

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
