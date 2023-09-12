#include "main.h"
#include <stdio.h>
/**
 * _abs - this function computes the absolute value of an interger
 * @c: the to use for argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
