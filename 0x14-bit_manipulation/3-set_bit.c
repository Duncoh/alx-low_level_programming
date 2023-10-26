#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit -a function that sets the
* value of a bit to 1 at a given index,
* followed by a new line.
*
* @n: is the pointer to the index.
* @index: the index to set.
*
* Return: 1 if it worked
* otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
