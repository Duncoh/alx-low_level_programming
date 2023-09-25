#include "main.h"

/**
 * set_string - a function that sets the value of a pointer
 * to a char, followed by a new line.
 * @s: Pointer to a pointer of string.
 * @to: Pointer to another string.
 *
 * Return: always void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
