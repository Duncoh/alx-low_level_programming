#include "main.h"
#include <stdio.h>

/**
 * _isupper - function checks for uppercase character.
 * @c: is a character argument
 *
 *Return: 1 if c is uppercase. 0 if otherwise.
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
