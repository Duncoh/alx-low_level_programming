#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_bit -a function that gets
* the value of a bit at a given index,
* followed by a new line.
*
* @n: holds the number to check.
* @index: the index to check.
*
* Return: returns the value of the bit or
* -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
