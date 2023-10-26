#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_binary - a function that prints
* the binary representation of a number,
* followed by a new line.
*
* @n: number to print.
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int copy, i, k;

	copy = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (copy != 0)
	{
		i++;
		copy = copy >> 1;
	}
	while (i)
	{
	copy = n;
	for (k = 1; k < i; k++)
	copy = copy >> 1;
		if (copy == (copy | 1))
		_putchar('1');
		else
	_putchar ('0');
		i--;
	}
}
