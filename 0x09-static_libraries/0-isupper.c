#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character,
 * followed by a new line.
 * @c: is the character.
 *
 *Return: 1 if c is uppercase. 0 if  not uppercase.
 */

int _isupper(int c)
{
	int uppercase;

	if (c > 64 && c < 91)
	{
		uppercase = 1;
	}
	else
	{
		uppercase = 0;
	}
	return (uppercase);
}
