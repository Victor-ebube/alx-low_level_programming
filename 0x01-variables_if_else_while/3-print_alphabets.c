#include <stdio.h>
/**
* main - prints alphabets in upper and lower case
*
* Return: Always 0 (success)
*/
int main(void)
{
	char i;

	/* A,a,Z,z are are alphabets in their cases */
	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar (i);
	putchar ('\n');

	return (0);
}
