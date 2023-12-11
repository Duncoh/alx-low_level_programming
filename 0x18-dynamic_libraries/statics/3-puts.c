#include <stdio.h>
#include "main.h"

/**
 * _puts - this function prints a string,
 * followed by a new line.
 * @str: Variable string.
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
