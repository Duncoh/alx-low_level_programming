#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string,
 * followed by a new line.
 * @s: is the string.
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
