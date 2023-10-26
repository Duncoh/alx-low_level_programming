#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_endianness - a function that checks
* the endianness,
* followed by a new line.
*
* Return: 0 if big endian or, 1 if  little endian
*/

int get_endianness(void)
{
	int i;

	i = 2;

	if (i & 1)
		return (0);
	else
		return (1);
}
