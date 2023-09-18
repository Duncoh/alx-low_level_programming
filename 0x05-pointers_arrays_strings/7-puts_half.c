#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: Variable string.
 *
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2 ; n < len ; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		for (n = (len - (len - 1) / 2) ; n < len ; n++)
		{
			_putchar (*(str + n));
		}
	}
	_putchar(10);
}
