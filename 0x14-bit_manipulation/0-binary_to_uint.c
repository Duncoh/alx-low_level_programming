#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* binary_to_uint - a function that converts
* a binary to the int,
* followed by a new line.
*
* @b: pointing to a string of 0 and 1
*
* Return: an unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
		return (0);
		}
	return (n);
}
