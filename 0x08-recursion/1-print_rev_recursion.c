#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - a function thatprints a tring in reverse,
 * followed by a new line.
 * @s: string to be printed.
 *
 * Return: Always void (success)
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
