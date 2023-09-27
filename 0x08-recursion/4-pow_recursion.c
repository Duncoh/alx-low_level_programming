#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion -  a function that returns the value of
 * x raised to the power of y,
 * followed by a new line.
 * @x: is the base integer.
 * @y: the power integer number.
 *
 * Return: the correct solution (value of power)
 */
int _pow_recursion(int x, int y)

{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
