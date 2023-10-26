#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits - a function that returns the number of bits
* you would need to flip to get from one number to another.
*
* @n: first number
* @m: second number
*
* Return: the count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, difference;

	difference = n ^ m;
	count = 0;
	for (count = 0; difference != 0; count += 1)
		difference &= (difference - 1);
	return (count);
}
