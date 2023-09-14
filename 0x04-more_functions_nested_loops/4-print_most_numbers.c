#include "main.h"

/**
 * print_most_numbers - Function prints numbers 0 to 9,
 * except 2 and 4, followed by a new line.
 *
 *Return: Always void.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
