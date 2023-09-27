#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of
 * a given number,
 * followed by a new line.
 * @n: is the integer number.
 *
 * Return: the solution (factorial number)
 */

int factorial(int n)
	{
	/* base case */
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
