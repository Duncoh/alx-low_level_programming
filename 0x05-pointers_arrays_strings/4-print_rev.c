#include "main.h"

/**
 * print_rev - a function that prints a string in reverse,
 * followed by a new line.
 * @s: Variable string.
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	char *p;

	p = s;

	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= p ; --s)
	{
		_putchar(*s);
	}
	_putchar(10);
}
