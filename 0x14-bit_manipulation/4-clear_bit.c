#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit -  a function that sets the value of
* a bit to 0 at a given index,
* followed by a new line.
*
* @n: is the pointer to the index.
* @index: the index the change.
*
* Return: success or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
