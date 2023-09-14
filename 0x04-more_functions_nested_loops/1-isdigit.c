#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function checks for digits 0 to 9
 * @c: a character argument
 *
 *Return: 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	int digit;

	if (c >= 48  && c <= 57)
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
