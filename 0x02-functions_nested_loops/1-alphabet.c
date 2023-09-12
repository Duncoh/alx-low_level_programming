#include "main.h"
/**
 * print_alphabet - this code prints an alphabet that is lowercase
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
